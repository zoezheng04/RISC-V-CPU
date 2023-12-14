module dircet_mapped_cache #(
    parameter DATA_WIDTH = 32,
              TAG_WIDTH = 27,
              SET_WIDTH = 3,
              OFFSET_WIDTH = 2,
              CACHE_WIDTH = 8
)(
    input logic clk;
    input logic [DATA_WIDTH-1:0] address;
    input logic [DATA_WIDTH-1:0] data;
    input logic overwrite;
    output logic cache_hit;
    output logic [DATA_WIDTH-1:0] cache_data;
);

//cache array
logic V [CACHE_WIDTH-1:0];
logic [TAG_WIDTH-1:0] tag [CACHE_WIDTH-1:0];
logic [DATA_WIDTH-1:0] data [CACHE_WIDTH-1:0];

//tag and set
logic [SET_WIDTH-1:0] data_set;
logic [TAG_WIDTH-1:0] data_tag;

assign data_set = address[4:2];
assign data_tag = address[32:5];
assign cache_hit = ((tag == data_tag) && V);

//cache hit
always_comb begin
    if (cache_hit) cache_data = data[data_set];
end

always_ff @(negedge clk) begin
    //cache miss
    if(data_tag != tag[data_set]) begin
        tag[data_set] <= data_tag;
        data[data_set] <= data;
        V[data_set] <= 1'b1;
    end
    //overwrite
    if(overwrite) begin
        if(data_tag == tag[data_set]) begin
            tag[data_set] <= data_tag;
            data[data_set] <= data;
        end
    end
end
endmodule




