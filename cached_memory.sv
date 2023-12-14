module cached_memory#(
        parameter   DATA_WIDTH = 32,
                    TAG_WIDTH = 27,
                    SET_WIDTH = 3,
                    OFFSET_WIDTH = 2,
                    CACHE_WIDTH = 8,
)(
    input logic                     clk,
    input logic  [DATA_WIDTH-1:0]   addr,
    input logic  [DATA_WIDTH-1:0]   Write_Data,
    input logic                     WE,
    input logic                     MemType,                    
    output logic [DATA_WIDTH-1:0]   Data_o
);

logic   [DATA_WIDTH-1:0]    WBData, WBaddr, mem_addr, mem_data, missed_data;
logic                       hit_wire, WBEN;

DataMemory main_memory(
    .clk(clk),
    .WE(WBEN),
    .MemType(MemType),
    .A(mem_addr),
    .WD(WBData),
    .RD(mem_data)
);

two_way_set_associative_cache cache(
    .clk(clk),
    .write_enable(WE),
    .address(addr),
    .data(missed_data),
    .cache_hit(hit_wire),
    .cache_data(cache_data_wire),
    .write_back_data(WBData),
    .write_back_address(WBaddr),
    .write_back_enable(WBEN)
);

always_comb begin
    Data_o = hit_wire ? cache_data_wire : mem_data;
    missed_data = hit_wire ? Write_Data : mem_data;
    mem_addr = WBEN ? WBaddr ? addr;
end

endmodule
