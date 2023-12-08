module Decoder #(
        parameter   DATA_WIDTH = 32,
                        WIDTH = 3
)(
    input logic                     clk,
    input logic  [DATA_WIDTH-1:0]   instr,
    input logic  [DATA_WIDTH-1:0]   WD3,
    input logic                     EQ,
    output logic [DATA_WIDTH-1:0]   RD1,
    output logic [DATA_WIDTH-1:0]   RD2,
    output logic [DATA_WIDTH-1:0]   Imm_o,
    output logic [3:0]              ALUctrl,
    output logic                    PCSrc,
    output logic                    ResultSrc,
    output logic                    MemWrite,
    output logic                    ALUsrc,
    output logic                    JumpSrc,
    output logic                    JRetSrc,
    output logic [DATA_WIDTH-1:0]   a0
);

logic [WIDTH-1:0]   ImmSrc_wire;
logic               RegWrite_wire;

ControlUnit control(
    .opcode(instr[6:0]),
    .funct3(instr[14:12]),
    .funct7(instr[30]),        // funct 7 isn't used in the control unit
    .EQ(EQ),
    .RegWrite(RegWrite_wire),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc_wire),
    .PCSrc(PCSrc),
    .MemWrite(MemWrite),
    .ResultSrc(ResultSrc),
    .JumpSrc(JumpSrc),
    .JRetSrc(JRetSrc)
);

regfile rf(
    .clk(clk),
    .WE3(RegWrite_wire),
    .WD3(WD3),
    .AD1(instr[19:15]),
    .AD2(instr[24:20]),
    .AD3(instr[11:7]),
    .RD1(RD1),
    .RD2(RD2),
    .a0(a0)
);

SignExtend extend(
    .Imm_i(instr[31:7]),
    .Imm_o(Imm_o),
    .ImmSrc(ImmSrc_wire)
);

endmodule
