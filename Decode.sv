module Decode (
    input logic             clk,
    input logic             FlushE,
    input logic [31:0]      InstrD,
    input logic [31:0]      PCPlus4D,
    input logic             RegWriteW,
    input logic [4:0]       RdW,
    input logic [31:0]      ResultW,
    input logic [31:0]      ALUOutM,
    input logic             ForwardAD,
    input logic             ForwardBD,

    output logic            RegWriteE,
    output logic [1:0]      ResultSrcE,
    output logic            MemWriteE,
    output logic            PCSrcD,
    output logic  [3:0]     ALUctrlE,
    output logic            ALUsrcE,
    output logic            RegDestE,
    output logic  [4:0]     RD1E,
    output logic  [4:0]     RD2E,
    output logic  [4:0]     Rs1E,
    output logic  [4:0]     Rs2E,
    output logic  [4:0]     Rs1D,
    output logic  [4:0]     Rs2D,
    output logic  [4:0]     RdE,
    output logic  [31:0]    ExtImmE,
    output logic  [31:0]    PCBranchD,
    output logic            BranchD,
    output logic  [31:0]    a0
);

///////////////// Wires ///////////////////
//////////// Control Unit Wires ///////////
logic                       RegWrite_wire;
logic   [3:0]               ALUctrl_wire;
logic                       ALUSrc_wire;
logic   [2:0]               ImmSrc_wire;
logic                       PCSrc_wire;
logic                       MemWrite_wire;
logic   [1:0]               ResultSrc_wire;
logic                       BranchD_wire;

//////////// Register File Wires //////////
logic   [31:0]              RD1D_wire;
logic   [31:0]              RD2D_wire;

//////////// SignExtend Wire //////////////
logic   [31:0]              ExtImmD_wire;

//////////// Branch MUXs /////////////////
logic  [31:0]               ForwardAD_MUX, ForwardBD_MUX;
assign ForwardAD_MUX = ForwardAD ? ALUOutM : RD1D_wire;
assign ForwardBD_MUX = ForwardBD ? ALUOutM : RD2D_wire;
assign PCSrcD = (BranchD_wire && (ForwardAD_MUX == ForwardBD_MUX));
assign PCBranchD = ((ExtImmD_wire << 2)) + PCPlus4D);    
assign BranchD = BranchD_wire;
assign Rs1D = InstrD[19:15];
assign Rs2D = InstrD[24:20];
/////////// Instantiate Modules ///////////
ControlUnit ControlUnit(
    //////// Inputs ///////////
    .opcode(InstrD[6:0]),
    .funct3(InstrD[14:12]),
    .funct7(InstrD[30]),  
    .EQ(EQ),
    /////// Outputs //////////
    .RegWrite(RegWrite_wire),
    .ALUctrl(ALUctrl_wire),
    .ALUsrc(ALUSrc_wire),
    .ImmSrc(ImmSrc_wire),
    .PCSrc(PCSrc_wire),
    .MemWrite(MemWrite_wire),
    .ResultSrc(ResultSrc_wire),
    .JumpSrc(JumpSrc_wire),
    .JRetSrc(JRetSrc_wire),
    .BranchD(BranchD_wire)
);

regfile RegisterFile( 
    //////// Inputs ///////////    
    .clk(clk),
    .instr(InstrD),
    .WE3(RegWriteW),
    .WD3(ResultW),
    .AD1(InstrD[19:15]),
    .AD2(InstrD[24:20]),
    .AD3(InstrD[11:7]),
    /////// Outputs //////////
    .RD1(RD1D_wire),
    .RD2(RD2D_wire),
    .a0(a0)
);

SignExtend SignExtend(
    //////// Inputs ///////////    
    .Imm_i(InstrD[31:7]),
    .ImmSrc(ImmSrc_wire),
    /////// Output //////////
    .Imm_o(ExtImmD_wire)
);

RegD Pipeline_RegisterD(
    //////// Inputs ///////
    .RegWriteD(RegWrite_wire),
    .ResultSrcD(ResultSrc_wire),
    .MemWriteD(MemWrite_wire),
    .PCSrcD(PCSrc_wire),
    .ALUctrlD(ALUctrl_wire),
    .ALUsrcD(ALUSrc_wire),
    .RD1D(RD1_wire),
    .RD2D(RD2_wire),
    .PCD(PCD),
    .Rs1D(InstrD[19:15]),
    .Rs2D(InstrD[24:20]),
    .RdD(InstrD[11:7]),
    .ExtImmD(ExtImmD_wire),
    .clk(clk),
    .FlushE(FlushE),
    /////// Outputs ////////
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .PCSrcE(PCSrcE),
    .ALUctrlE(ALUctrlE),
    .ALUsrcE(ALUsrcE),
    .RD1E(RD1E),
    .RD2E(RD2E),
    .PCE(PCE),
    .Rs1E(Rs1E),
    .Rs2E(Rs2E),
    .RdE(RdE),
    .ExtImmE(ExtImmE)
);

endmodule
