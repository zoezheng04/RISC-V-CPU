module InstructionMemory #(
        parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic                     rst,
    input logic                     trigger,
    input logic                     JumpSrc,
    input logic  [DATA_WIDTH-1:0]   JRet_o,
    input logic                     PCSrc,
    input logic  [DATA_WIDTH-1:0]   result,
    output logic [DATA_WIDTH-1:0]   instr,
    output logic [DATA_WIDTH-1:0]   WD3,
    output logic [DATA_WIDTH-1:0]   PC_out
);

logic [DATA_WIDTH-1:0] next;
logic [DATA_WIDTH-1:0] pc_wire;
logic [DATA_WIDTH-1:0] inc_pc;
logic [DATA_WIDTH-1:0] PC_next;

PC pc_reg(
    .clk(clk),
    .rst(rst),
    .PCNext(next),
    .PC(pc_wire)
);

rom InstructionMem(
    .addr(pc_wire),
    .dout(instr)
);

always_comb begin
    inc_pc = pc_wire + 4;
    PC_next = PCSrc ? JRet_o : inc_pc;
    next = trigger ? PC_next : 32'hBFC00000;
    WD3 = JumpSrc ? inc_pc : result;
    PC_out = pc_wire;
end

endmodule
