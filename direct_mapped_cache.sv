module dircet_mapped_cache #(
    parameter DATA_WIDTH = 32,
              TAG_WIDTH = 27,
              SET_WIDTH = 3,
              OFFSET_WIDTH = 2
)(
    input logic clk;
    input logic [DATA_WIDTH-1:0] addr;
    input logic [DATA_WIDTH-1:0] data;
    input logic overwrite;
    output logic cache_hit;
    output logic [DATA_WIDTH-1:0] cache_data;
)



