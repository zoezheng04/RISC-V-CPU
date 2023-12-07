module DM #(
    parameter DATA_WIDTH = 32
)(
    input logic                   clk,
    input logic  [DATA_WIDTH-1:0] ALU_o,
    input logic  [DATA_WIDTH-1:0] WD,
    input logic                   ResultSrc,
    input logic                   MemWrite,
    output logic [DATA_WIDTH-1:0] Result
);

logic [DATA_WIDTH-1:0] RD_wire;

DataMemory DataMem(
    .clk(clk),
    .WE(MemWrite),
    .A(ALU_o),
    .WD(WD),
    .RD(RD_wire)
);

always_comb begin
    Result = ResultSrc ? RD_wire : ALU_o;
end

endmodule
