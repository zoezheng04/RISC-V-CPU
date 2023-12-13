module cpu #(
    parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic                     rst,
    input logic                     trigger,
    output logic  [DATA_WIDTH-1:0]  a0
);

logic                   PCSrc_wire;
logic                   ResultSrc_wire;
logic                   MemWrite_wire;
logic [3:0]             ALUctrl_wire;
logic                   ALUSrc_wire;
logic                   JumpSrc_wire;
logic                   JRetSrc_wire;
logic [DATA_WIDTH-1:0]  Result_wire;
logic [DATA_WIDTH-1:0]  instr_wire;
logic [DATA_WIDTH-1:0]  WD3_wire;
logic                   EQ_wire;
logic [DATA_WIDTH-1:0]  RD1_wire;
logic [DATA_WIDTH-1:0]  RD2_wire;  
logic [DATA_WIDTH-1:0]  Imm_o_wire;
logic [DATA_WIDTH-1:0]  ALU_o_wire;
logic [DATA_WIDTH-1:0]  PC_target;
logic [DATA_WIDTH-1:0]  PC_out_wire;
logic [DATA_WIDTH-1:0]  JRet_o_wire;
logic                   MemType_wire;

InstructionMemory IM(
    .clk(clk),
    .rst(rst),
    .trigger(trigger),
    .JumpSrc(JumpSrc_wire),
    .JRet_o(JRet_o_wire),
    .PCSrc(PCSrc_wire),
    .result(Result_wire),
    .instr(instr_wire),
    .WD3(WD3_wire),
    .PC_out(PC_out_wire)
);

Decoder D(
    .clk(clk),
    .instr(instr_wire),
    .WD3(WD3_wire),
    .EQ(EQ_wire),
    .RD1(RD1_wire),
    .RD2(RD2_wire),
    .Imm_o(Imm_o_wire),
    .ALUctrl(ALUctrl_wire),
    .PCSrc(PCSrc_wire),
    .ResultSrc(ResultSrc_wire),
    .MemWrite(MemWrite_wire),
    .ALUsrc(ALUSrc_wire),
    .JumpSrc(JumpSrc_wire),
    .JRetSrc(JRetSrc_wire),
    .a0(a0),
    .MemType(MemType_wire)
);

Execute E(
    .RD1(RD1_wire),
    .RD2(RD2_wire),
    .Imm_o(Imm_o_wire),
    .ALUctrl(ALUctrl_wire),
    .ALUsrc(ALUSrc_wire),
    .EQ(EQ_wire),
    .ALU_o(ALU_o_wire)
);

DM dm_top(
    .clk(clk),
    .ALU_o(ALU_o_wire),
    .WD(RD2_wire),
    .ResultSrc(ResultSrc_wire),
    .MemWrite(MemWrite_wire),
    .Result(Result_wire),
    .MemType(MemType_wire)
);

always_comb begin
    PC_target = Imm_o_wire + PC_out_wire;
    JRet_o_wire = JRetSrc_wire ? Result_wire : PC_target; 
end

endmodule
