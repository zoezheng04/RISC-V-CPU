module pc#(
        parameter DATA_WIDTH = 32
)(
    input logic                     PCSrc,
    input logic [DATA_WIDTH-1:0]    ImmOp,
    input logic                     clk,
    input logic                     rst,
    output logic [DATA_WIDTH-1:0]   PCout
);

    logic [DATA_WIDTH-1:0]  branch;
    logic [DATA_WIDTH-1:0]  next;
    logic [DATA_WIDTH-1:0]  inc;

    assign branch = PCout + ImmOp;
    assign inc = PCout + 4;

    
PCmux2 pcmux(
    .i1(branch),
    .i0(inc),
    .sel(PCSrc),
    .m_out(next)
);

PCReg REG(
    .clk(clk),
    .rst(rst),
    .next_PC(next),
    .PC(PCout)
);

endmodule
