module dir_cached_memory#(
        parameter   DATA_WIDTH = 32,
                    TAG_WIDTH = 27,
                    SET_WIDTH = 3,
                    OFFSET_WIDTH = 2,
                    CACHE_WIDTH = 8
)(
    input logic                     clk,
    input logic  [DATA_WIDTH-1:0]   addr,
    input logic  [DATA_WIDTH-1:0]   Write_Data,
    input logic                     WE,
    input logic                     MemType,                    
    output logic [DATA_WIDTH-1:0]   Data_o
);

logic [DATA_WIDTH-1:0] mem_data, cache_data_wire;
logic                  overwrite_wire, hit;

assign overwrite_wire = 1'b0;

DataMemory main_memory(
    .clk(clk),
    .WE(WE),
    .MemType(MemType),
    .A(addr),
    .WD(Write_Data),
    .RD(mem_data)
);

direct_mapped_cache cache(
    .clk(clk),
    .address(addr),
    .wr_data(mem_data),
    .overwrite(overwrite_wire),
    .cache_hit(hit),
    .cache_data(cache_data_wire)
);

always_comb Data_o = hit ? cache_data_wire : mem_data;

endmodule
