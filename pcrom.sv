module pcrom#(
    parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic                     rst,
    input logic                     PCSrc,
    input logic [DATA_WIDTH-1:0]    ImmOp,
    output logic [DATA_WIDTH-1:0]   instr
);

logic [DATA_WIDTH-1:0]      pcwire;

pc pc_t(
    .clk(clk),
    .rst(rst),
    .PCSrc(PCSrc),
    .ImmOp(ImmOp),
    .PCout(pcwire)
);

rom rom_t(
    .addr(pcwire),
    .dout(instr)
);

endmodule
