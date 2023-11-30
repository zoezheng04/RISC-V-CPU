module test#(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic [DATA_WIDTH-1:0]    addr,
    input logic [2:0]               ImmSrc,
    output logic [DATA_WIDTH-1:0]   Imm_o
);

logic [DATA_WIDTH-1:0] instr_wire;

rom input_s(
    .clk(clk),
    .addr(addr),
    .dout(instr_wire)
);

SignExtend extend(
    .Imm_i(instr_wire),
    .ImmSrc(ImmSrc),
    .Imm_o(Imm_o)
);

endmodule
