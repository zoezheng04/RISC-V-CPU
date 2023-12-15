module Decode (
    input logic             clk,
    input logic             Branchstall,
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
    output logic  [31:0]    BranchReturnD,
    output logic            BranchTakenD,
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
logic  [31:0]               BranchReturn_wire;
logic                       BranchTaken_wire;
//////////// Register File Wires //////////
logic   [31:0]              RD1D_wire;
logic   [31:0]              RD2D_wire;

//////////// SignExtend Wire //////////////
logic   [31:0]              ExtImmD_wire;
logic   [31:0]              ExtImmDReg_wire;

//////////// Assign and MUXs //////////////
/////////// Forwarding Logic //////////////
logic  [31:0]               ForwardAD_MUX, ForwardBD_MUX;
logic  [31:0]               PCD;

assign PCD = PCPlus4D - 4;
assign ForwardAD_MUX = ForwardAD ? ALUOutM : RD1D_wire;
assign ForwardBD_MUX = ForwardBD ? ALUOutM : RD2D_wire;
assign BranchD = (BEQ_wire || BNE_wire);
assign ExtImmDReg_wire = JumpSrc_wire ? (PCPlus4D) : ExtImmD_wire; 

////////////// Branch Prediction ////////////
always_comb begin
    if (Branchstall == 0) begin
        if(JumpSrc_wire) begin
            assign PCSrcD = 1'b1;
            assign PCBranchD = ((ExtImmD_wire) + (PCD));
            assign BranchTaken_wire = PCSrcD;
        end else if(JRetSrc_wire) begin
            assign PCSrcD = 1'b1;
            assign PCBranchD = RD1D_wire;
            assign BranchTaken_wire = PCSrcD;
        end else if (BNE_wire) begin
            assign PCSrcD = (ForwardAD_MUX != ForwardBD_MUX);
            assign PCBranchD =  PCSrcD ? (ExtImmD_wire + PCD) : PCPlus4D;
            assign BranchTaken_wire = PCSrcD;
        end else if (BEQ_wire) begin
            assign PCSrcD = (ForwardAD_MUX == ForwardBD_MUX);
            assign PCBranchD =  PCSrcD ? (ExtImmD_wire + PCD) : PCPlus4D;
            assign BranchTaken_wire = PCSrcD;
        end else begin
            assign PCSrcD = 0;
            assign PCBranchD = 0;
            assign BranchTaken_wire = 0;
        end
    end else begin
        assign PCBranchD = ((PCD) > (ExtImmD_wire + PCD)) ? (ExtImmD_wire + PCD) : PCPlus4D;
        assign PCSrcD = (PCBranchD != PCPlus4D);
        assign BranchReturn_wire = (PCBranchD == PCPlus4D) ? (ExtImmD_wire + PCD) : PCPlus4D;
        assign BranchTaken_wire  = PCSrcD;
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
    .BranchReturnD(BranchReturn_wire),
    .BranchTakenD(BranchTaken_wire),
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
    .MemTypeE(MemTypeE),
    .BranchReturn(BranchReturnD),
    .BranchTaken(BranchTakenD)
);

endmodule
