module test#(
        parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic                     rst,
    input logic                     EQ,
    input logic                     PCSrc_i,
    input logic [DATA_WIDTH-1:0]    ImmOp,

    output logic                    RegWrite,   // this needs to be synchronous
    output logic [2:0]              ALUctrl,    // Sets type of arithmetic operation is done
    output logic                    ALUsrc,     // select line for ALU - selects ImmOp or regOp2
    output logic [2:0]              ImmSrc,     // selects what type of extension it is
    output logic                    PCSrc,      // Sets PCNext to PCTarget or PCPlus4
    output logic                    MemWrite,   // memory write enable
    output logic                    ResultSrc,   // Sets write data to Data Memory or ALUResult
    output logic                    JumpSrc,
    output logic                    JRetSrc
);

logic [DATA_WIDTH-1:0]  instr_wire;

pcrom in(
    .clk(clk),
    .rst(rst),
    .PCSrc(PCSrc_i),
    .ImmOp(ImmOp),
    .instr(instr_wire)
);

ControlUnit control(
    .opcode(instr_wire[6:0]),
    .funct3(instr_wire[14:12]),
    .funct7(instr_wire[30]),
    .EQ(EQ),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCSrc(PCSrc),
    .MemWrite(MemWrite),
    .ResultSrc(ResultSrc),
    .JumpSrc(JumpSrc),
    .JRetSrc(JRetSrc)
);

endmodule
