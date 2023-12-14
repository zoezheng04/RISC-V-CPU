module Decode (
    input logic             clk,
    input logic             FlushD,
    input logic [31:0]      InstrD,
    input logic [31:0]      PCPlus4D,
    input logic             RegWriteW,
    input logic [4:0]       RdW,
    input logic [31:0]      ResultW,
    input logic [31:0]      ALUOutM,
    input logic             ForwardAD,
    input logic             ForwardBD,

    output logic            RegWriteE,
    output logic            ResultSrcE,
    output logic            MemWriteE,
    output logic            PCSrcD,
    output logic  [3:0]     ALUctrlE,
    output logic            ALUsrcE,
    output logic  [31:0]    RD1E,
    output logic  [31:0]    RD2E,
    output logic  [4:0]     Rs1E,
    output logic  [4:0]     Rs2E,
    output logic  [4:0]     Rs1D,
    output logic  [4:0]     Rs2D,
    output logic  [4:0]     RdE,
    output logic  [31:0]    ExtImmE,
    output logic  [31:0]    PCBranchD,
    output logic            BranchD,
    output logic            MemTypeE,
    output logic  [31:0]    a0
);

///////////////// Wires ///////////////////
//////////// Control Unit Wires ///////////
logic                       RegWrite_wire;
logic   [3:0]               ALUctrl_wire;
logic                       ALUSrc_wire;
logic   [2:0]               ImmSrc_wire;
logic                       MemWrite_wire;
logic                       ResultSrc_wire;
logic                       JumpSrc_wire;
logic                       JRetSrc_wire;
logic                       BEQ_wire;
logic                       BNE_wire;
logic                       MemType_wire;

//////////// Register File Wires //////////
logic   [31:0]              RD1D_wire;
logic   [31:0]              RD2D_wire;

//////////// SignExtend Wire //////////////
logic   [31:0]              ExtImmD_wire;
logic   [31:0]              ExtImmDReg_wire;

//////////// Assign and MUXs //////////////
// Forwarding Logic
logic  [31:0]               ForwardAD_MUX, ForwardBD_MUX;
assign ForwardAD_MUX = ForwardAD ? ALUOutM : RD1D_wire;
assign ForwardBD_MUX = ForwardBD ? ALUOutM : RD2D_wire;
// Programme Counter logic (Jumps and Branches)
assign PCBranchD = JRetSrc_wire ? RD1D_wire : ((ExtImmD_wire) + (PCPlus4D - 4));    
assign BranchD = (BEQ_wire || BNE_wire);
assign ExtImmDReg_wire = JumpSrc_wire ? (PCPlus4D) : ExtImmD_wire; 
    
always_comb begin
    if(BNE_wire) begin
        PCSrcD = (ForwardAD_MUX != ForwardBD_MUX);
    end else if (BEQ_wire) begin
        PCSrcD = (ForwardAD_MUX == ForwardBD_MUX);
    end else begin
        PCSrcD = (JumpSrc_wire || JRetSrc_wire);
    end   
end
assign Rs1D = InstrD[19:15];
assign Rs2D = InstrD[24:20];

/////////// Instantiate Modules ///////////
ControlUnit ControlUnit(
    //////// Inputs ///////////
    .opcode(InstrD[6:0]),
    .funct3(InstrD[14:12]),
    .funct7(InstrD[30]),  
    /////// Outputs //////////
    .RegWrite(RegWrite_wire),
    .ALUctrl(ALUctrl_wire),
    .ALUsrc(ALUSrc_wire),
    .ImmSrc(ImmSrc_wire),
    .MemWrite(MemWrite_wire),
    .ResultSrc(ResultSrc_wire),
    .BEQ(BEQ_wire),
    .BNE(BNE_wire),
    .JumpSrc(JumpSrc_wire),
    .JRetSrc(JRetSrc_wire),
    .MemType(MemType_wire)
);

regfile RegisterFile( 
    //////// Inputs ///////////    
    .WE3(RegWriteW),
    .WD3(ResultW),
    .AD1(InstrD[19:15]),
    .AD2(InstrD[24:20]),
    .AD3(RdW),
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
    .ALUctrlD(ALUctrl_wire),
    .ALUsrcD(ALUSrc_wire),
    .RD1D(RD1D_wire),
    .RD2D(RD2D_wire),
    .Rs1D(InstrD[19:15]),
    .Rs2D(InstrD[24:20]),
    .RdD(InstrD[11:7]),
    .ExtImmD(ExtImmDReg_wire),
    .clk(clk),
    .FlushD(FlushD),
    .MemTypeD(MemType_wire),
    /////// Outputs ////////
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .ALUctrlE(ALUctrlE),
    .ALUsrcE(ALUsrcE),
    .RD1E(RD1E),
    .RD2E(RD2E),
    .Rs1E(Rs1E),
    .Rs2E(Rs2E),
    .RdE(RdE),
    .ExtImmE(ExtImmE),
    .MemTypeE(MemTypeE)
);

endmodule
