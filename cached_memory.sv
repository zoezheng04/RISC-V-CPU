module cached_memory#(
        parameter   DATA_WIDTH = 32,
                    TAG_WIDTH = 27,
                    SET_WIDTH = 3,
                    OFFSET_WIDTH = 2,
                    CACHE_WIDTH = 8,
)(
    input logic                     clk,
    input logic  [DATA_WIDTH-1:0]   addr,
    input logic  [DATA_WIDTH-1:0]   WD,
    input logic                     WE,
    output logic [DATA_WIDTH-1:0]   Data_o
);

logic   [DATA_WIDTH-1:0]    addr_wire, cache_data_wire, missed_dta;
logic                       hit_wire;



DataMemory(
    .clk(clk),
    .WE(WE),
    .A(addr_wire),
    .WD(WD),
    .RD(missed_data)
);

two_way_cache(
    .clk(clk),
    .address(addr_wire),
    .data(missed_data),
    .cache_hit(hit_wire),
    .cache_data(cache_data_wire)
);

always_comb Data_o = hit_wire ? cache_data_wire: missed_dta;

endmodule