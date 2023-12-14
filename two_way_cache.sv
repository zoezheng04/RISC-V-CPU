module two_way_cache #(
    parameter  DATA_WIDTH = 32,
                TAG_WIDTH = 27,
                SET_WIDTH = 3,
                OFFSET_WIDTH = 2,
                CACHE_LENGTH = 8
)(
    input logic clk,
    input logic write_enable,
    input logic [DATA_WIDTH-1:0] address,
    input logic [DATA_WIDTH-1:0] data,
    output logic cache_hit,
    output logic [DATA_WIDTH-1:0] cache_data,
    output logic [DATA_WIDTH-1:0] write_back_data,
    output logic [DATA_WIDTH-1:0] write_back_address
);

// LRU counter
logic lru_counter_0 [CACHE_LENGTH-1:0];
logic lru_counter_1 [CACHE_LENGTH-1:0];

//cache array
logic V_0 [CACHE_LENGTH-1:0];
logic D_0 [CACHE_LENGTH-1:0]; //dirty bit
logic [TAG_WIDTH-1:0] tag_0 [CACHE_LENGTH-1:0];
logic [DATA_WIDTH-1:0] data_0 [CACHE_LENGTH-1:0];

logic V_1 [CACHE_LENGTH-1:0];
logic D_1 [CACHE_LENGTH-1:0];
logic [TAG_WIDTH-1:0] tag_1 [CACHE_LENGTH-1:0];
logic [DATA_WIDTH-1:0] data_1 [CACHE_LENGTH-1:0];

//tag and set
logic [SET_WIDTH-1:0] data_set;
logic [TAG_WIDTH-1:0] data_tag;

assign data_set = address[4:2];
assign data_tag = address[31:5];

//cache hit
logic cache_hit_0, cache_hit_1; //cache hit way 0 and 1
assign cache_hit_0 = ((tag_0[data_set] == data_tag) && V_0[data_set]);
assign cache_hit_1 = ((tag_1[data_set] == data_tag) && V_1[data_set]);
assign cache_hit = cache_hit_0 || cache_hit_1;

// Sequential block for write operation
always_ff @(posedge clk) begin
    if (cache_hit) begin
        if (write_enable) begin
            if (cache_hit_1) begin
                data_1[data_set] <= data;
                D_1[data_set] <= 1'b1;
                lru_counter_1[data_set] <= lru_counter_1[data_set] + 1;
            end
            else begin
                data_0[data_set] <= data;
                D_0[data_set] <= 1'b1;
                lru_counter_0[data_set] <= lru_counter_0[data_set] + 1;
            end
        end
    end
end

always_comb begin
    if(cache_hit) begin
        if(cache_hit_1) begin
            cache_data = data_1[data_set];
            lru_counter_1[data_set] <= lru_counter_1[data_set] + 1;
        end
        else begin
            cache_data = data_0[data_set];
            lru_counter_0[data_set] <= lru_counter_0[data_set] + 1;
        end
    end
end

//cache miss
always_ff @(negedge clk) begin
    if(!cache_hit) begin
        //compulsory miss
        if(!V_0[data_set]) begin
            tag_0[data_set] <= data_tag;
            data_0[data_set] <= data;
            V_0[data_set] <= 1'b1;
            D_0[data_set] <= 1'b0;
            lru_counter_0[data_set] <= 0;
        end
        else if (!V_1[data_set]) begin
            tag_1[data_set] <= data_tag;
            data_1[data_set] <= data;
            V_1[data_set] <= 1'b1;
            D_1[data_set] <= 1'b0;
            lru_counter_1[data_set] <= 0;
        end
        //capacity miss -> LRU eviction policy
        else if (V_1[data_set] && V_0[data_set]) begin
            if (lru_counter_0[data_set] < lru_counter_1[data_set]) begin
                if(D_0[data_set]) begin //write back to main mem
                    write_back_data = data_0[data_set];
                    write_back_address = {tag_0[data_set], data_set, {OFFSET_WIDTH{1'b0}}};
                    D_0[data_set] <= 1'b0;
                end
                //evict and fill
                tag_0[data_set] <= data_tag;
                data_0[data_set] <= data;
                lru_counter_0[data_set] <= 0;
            end
            else begin
                if(D_1[data_set]) begin
                    write_back_data = data_1[data_set]; 
                    write_back_address = {tag_1[data_set], data_set, {OFFSET_WIDTH{1'b0}}};
                    D_1[data_set] <= 1'b0;
                end
                tag_1[data_set] <= data_tag;
                data_1[data_set] <= data;
                lru_counter_1[data_set] <= 0;
            end
        end
    end
end
endmodule
