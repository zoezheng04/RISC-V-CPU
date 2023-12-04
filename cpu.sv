module cpu #(
        parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic                     rst,
    input logic                     trigger,
    output logic [DATA_WIDTH-1:0]   a0
);

//pc and rom wires:
logic   [DATA_WIDTH-1:0]    instr_wire;
logic   [DATA_WIDTH-1:0]    PCout;
logic   [DATA_WIDTH-1:0]    pc_wire;
logic   [DATA_WIDTH-1:0]    next_pc;
logic   [DATA_WIDTH-1:0]    pc_plus4;
logic   [DATA_WIDTH-1:0]    PC_target;
logic   [DATA_WIDTH-1:0]    pc_jump;
//control unit wires:
logic                       EQ_wire;
logic                       RegWrite_wire;
logic   [2:0]               ALUctrl_wire;
logic                       ALUSrc_wire;
logic   [2:0]               ImmSrc_wire;
logic                       PCSrc_wire;
logic                       MemWrite_wire;
logic                       ResultSrc_wire;
logic                       JumpSrc_wire;
logic                       JRetSrc_wire;
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

assign PC_target = Imm_o_wire + PCout;                          // pc target adder
assign Result_wire = ResultSrc_wire ? mem_out : ALUout_wire;    // Result mux
assign pc_jump = JRetSrc_wire ? Result_wire : PC_target;        // pc jump mux
assign next_pc = PCSrc_wire ? pc_jump : pc_plus4;               // pc next mux
assign pc_wire = trigger ? next_pc : 32'b0;                     // trigger mux
assign pc_plus4 = pc_wire + 4;                                  // pc increment
assign write_to_reg = JumpSrc_wire ? pc_plus4 : Result_wire;    // register write mux
assign ALUop2_wire = ALUSrc_wire ? Imm_o_wire : RD2_wire;       // ALU input2 mux

rom instr_mem(
    .addr(PCout),
    .dout(instr_wire)
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
    .funct7(instr_wire[30]),        // funct 7 isn't used in the control unit
    .EQ(EQ_wire),
    .RegWrite(RegWrite_wire),
    .ALUctrl(ALUctrl_wire),
    .ALUsrc(ALUSrc_wire),
    .ImmSrc(ImmSrc_wire),
    .PCSrc(PCSrc_wire),
    .MemWrite(MemWrite_wire),
    .ResultSrc(ResultSrc_wire),
    .JumpSrc(JumpSrc_wire),
    .JRetSrc(JRetSrc_wire)
);

regfile regfile_top(
    .clk(clk),
    .instr(instr_wire),
    .WE3(RegWrite_wire),
    .WD3(write_to_reg),
    .AD1(instr_wire[19:15]),
    .AD2(instr_wire[24:20]),
    .AD3(instr_wire[11:7]),
    .RD1(RD1_wire),
    .RD2(RD2_wire),
    .a0(a0)
);

SignExtend extend(
    .Imm_i(instr_wire[31:7]),
    .Imm_o(Imm_o_wire),
    .ImmSrc(ImmSrc_wire)
);

DataMemory ram(
    .clk(clk),
    .WE(MemWrite_wire),
    .A(ALUout_wire),
    .RD(mem_out),
    .WD(RD2_wire)
);

alu alu_top(
    .SrcA(RD1_wire),
    .SrcB(ALUop2_wire),
    .ALUControl(ALUctrl_wire),
    .ALUResult(ALUout_wire),
    .Zero(EQ_wire)
);

endmodule
