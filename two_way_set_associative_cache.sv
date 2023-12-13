//Eviction Policy: LRU
module two_way_cache #(
    parameters DATA_WIDTH = 32,
                TAG_WIDTH = 27,
                SET_WIDTH = 3,
                OFFSET_WIDTH = 2,
                CACHE_WIDTH = 8,
) (
    input logic clk;
    input logic [DATA_WIDTH-1:0] address;
    input logic [DATA_WIDTH-1:0] data;
    input logic overwrite;
    output logic cache_hit;
    output logic [DATA_WIDTH-1:0] cache_data;
);

//cache array
logic V_0 [CACHE_WIDTH-1:0];
logic [TAG_WIDTH-1:0] tag_0 [CACHE_WIDTH-1:0];
logic [DATA_WIDTH-1:0] data_0 [CACHE_WIDTH-1:0];

logic V_1 [CACHE_WIDTH-1:0];
logic [TAG_WIDTH-1:0] tag_1 [CACHE_WIDTH-1:0];
logic [DATA_WIDTH-1:0] data_1 [CACHE_WIDTH-1:0];

//tag and set
logic [SET_WIDTH-1:0] data_set;
logic [TAG_WIDTH-1:0] data_tag;

assign data_set = address[4:2];
assign data_tag = address[32:5];

//cache hit
logic cache_hit_0, cache_hit_1; //cache hit way 0 and 1
assign cache_hit_0 = ((tag_0 == data_tag) && V_0);
assign cache_hit_1 = ((tag_1 == data_tag) && V_1);
assign cache_hit = cache_hit_0 || cache_hit_1;

//cache data output
always_comb begin
    if(cache_hit) begin
        if(cache_hit_1) cache_data = data_1[data_set];
        else cache_data = data_0[data_set];
    end
end

//cache update
always_ff @(negedge clk) begin
    //cache miss
    if(!cache_hit) begin
        if(!cache_hit_0) begin
            tag_0[data_set] <= data_tag;
            data_0[data_set] <= data;
            V_0[data_set] <= 1'b1;
        end
        else if (!cache_hit_1) begin
            tag_1[data_set] <= data_tag;
            data_1[data_set] <= data;
            V_1[data_set] <= 1'b1;
        end
    end

    //overwrite
    if(overwrite) begin
        if(data_tag == tag_0[data_set]) begin
            tag_0[data_set] <= data_tag;
            data_0[data_set] <= data;
        end
        else if(data_tag == tag_1[data_set]) begin
            tag_1[data_set] <= data_tag;
            data_1[data_set] <= data;
        end
    end
end
endmodule
