module cpu #(
        parameter DATA_WIDTH = 32
)(
    input logic                 clk,
    input logic                 rst,
    input logic                 trigger,
    output logic                a0
);

//pc and rom wires:
logic   [DATA_WIDTH-1:0]    instr_wire;
logic   [DATA_WIDTH-1:0]    PCout;
logic   [DATA_WIDTH-1:0]    pc_wire;
logic   [DATA_WIDTH-1:0]    next_pc;
logic   [DATA_WIDTH-1:0]    pc_plus4;
logic   [DATA_WIDTH-1:0]    JRet_wire;
logic   [DATA_WIDTH-1:0]    PC_target;
logic   [DATA_WIDTH-1:0]    pc_jump;
//control unnit wire:
logic                       EQ_wire;
logic                       RegWrite_wire;
logic   [2:0]               ALUctrl_wire;
logic                       ALUSrc_wire;
logic   [2:0]               ImmSrc_wire;
logic                       PCSrc_wire;
logic                       MemWrite_wire;
logic                       ResultSrc_wire;
logic                       JumpSrc_wire;
logic                       JRetSrc_wire
//register file wires:
logic   [DATA_WIDTH-1:0]    write_to_reg;
logic   [DATA_WIDTH-1:0]    RD1_wire;
logic   [DATA_WIDTH-1:0]    RD2_wire;
//SignExtend wire:
logic   [DATA_WIDTH-1:0]    Imm_o_wire;
//data memory wire:
logic   [DATA_WIDTH-1:0]    mem_out;
// ALU wires
logic   [DATA_WIDTH-1:0]    ALUout_wire;
logic   [DATA_WIDTH-1:0]    ALUop2_wire;

logic   [DATA_WIDTH-1:0]    Result_wire;

// mux: sel ? i1: i0
assign pc_wire = trigger ? next_pc : 32b'0;                     // trigger mux
assign pc_plus4 = pc_wire + 4;                                  // pc increment
assign next_pc = PCSrc_wire ? JRet_wire : pc_plus4;             // pc next mux
assign write_to_reg = JumpSrc_wire ? pc_plus4 : Result_wire;    // register write mux
assign PC_target = Imm_o_wire + PCout;                          // pc target adder
assign pc_jump = JRet_wire ? Result_wire : PC_target;           // pc jump mux
assign ALUop2_wire = ALUSrc_wire ? Imm_o_wire : RD2_wire;       // ALU input2 mux
assign Result_wire = ResultSrc_wire ? mem_out : ALUout_wire;    // Result mux

rom instr_mem(
    .addr(PCout),
    .instr(instr_wire)
);

PC pc_reg(
    .clk(clk),
    .rst(rst),
    .PCNext(pc_wire),
    .PC(PCout)
);

ControlUnit control(
    .opcode(instr_wire[6:0]),
    .funct3(instr_wire[14:12]),
    .funct7(instr_wire[30]),
    .EQ(EQ_wire),
    .RegWrite(RegWrite_wire)
    .ALUctrl(ALUctrl_wire),
    .ALUsrc.(ALUSrc_wire),
    .ImmSrc(ImmSrc_wire),
    .PCSrc(PCSrc_wire),
    .MemWrite(MemWrite_wire),
    .ResultSrc(ResultSrc_wire),
    .JumpSrc(JumpSrc_wire),
    .JRetSrc(JRetSrc_wire)
);

regfile registers(
    .clk(clk),
    .instr(instr_wire),
    .WE3(RegWrite_wire),
    .WD3(write_to_reg),
    .RD1(RD1_wire),
    .RD2(RD2_wire)
);

SignExtend extend(
    .Imm_i(instr[31:7]),
    .Imm_o(Imm_o_wire),
    .ImmSrc(ImmSrc_wire)
);

DataMemory ram(
    .clk(clk),
    .WE(MemWrite_wire),
    .A(ALUout_wire),
    .RD(mem_out)
);



endmodule