module Execute (
    input logic            clk,
    input logic            Stall,
    input logic            RegWriteE,
    input logic  [1:0]     ResultSrcE,
    input logic            MemWriteE,
    input logic            JumpSrcE,
    input logic            PCSrcE,
    input logic  [2:0]     ALUctrlE,
    input logic            ALUsrcE,
    input logic            JRetSrcE,
    input logic  [4:0]     RD1E,
    input logic  [4:0]     RD2E,
    input logic  [31:0]    PCE,
    input logic  [4:0]     RdE,
    input logic  [31:0]    ExtImmE,
    input logic  [31:0]    PCPlus4E,
    input logic  [2:0]     ForwardAE,
    input logic  [2:0]     ForwardBE,
    input logic  [31:0]    ResultW,

    output logic           RegWriteM,
    output logic [1:0]     ResultSrcM,
    output logic           MemWriteM,
    output logic [31:0]    ALUResultM,
    output logic [31:0]    WriteDataM,
    output logic [4:0]     RdM,
    output logic [31:0]    PCPlus4M,
    output logic           PCSrcE_o,
    output logic [31:0]    PCTargetE, 
    output logic           EQ
);

///////////////// Wires ///////////////////
////////////// ALU Wires //////////////////
logic   [31:0]    SrcAE_wire;
logic   [31:0]    SrcBE_wire;
logic   [31:0]    SrcBE_Forwarding_wire;
logic   [31:0]    Result_wire;
logic   [31:0]    PCJump_wire;
    
case (ForwardAE)
    2'b00: assign SrcAE_wire = RD1E;
    2'b01: assign SrcAE_wire = ResultW;
    2'b10: assign SrcAE_wire = ALUResultM; 
    default: assign SrcAE_wire = RD1E;
endcase

case (ForwardBE)
    2'b00: assign SrcBE_Forwarding_wire = RD2E;
    2'b01: assign SrcBE_Forwarding_wire = ResultW;
    2'b10: assign SrcBE_Forwarding_wire = ALUResultM;
    default: assign SrcBE_Forwarding_wire = RD2E;
endcase

assign SrcBE_wire = ALUSrcE ? ExtImmE : SrcBE_Forwarding_wire;
assign PCTargetE = PCE + ExtImmE;
assign PCJump_wire = JRetSrcE ? ResultW : PCTargetE;
assign PCSrcE_o = PCSrcE ? PCJump_wire : PCPlus4E;

/////////// Instantiate Modules ///////////

alu ALU(
    ///////// Inputs ////////
    .SrcA(SrcAE_wire),
    .SrcB(SrcBE_wire),
    .ALUControl(ALUctrlE),
    //////// Outputs ///////
    .ALUResult(Result_wire),
    .Zero(EQ)
);

RegE Pipeline_RegisterE(
    ///////// Inputs ////////
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .ALUResultE(Result_wire),
    .WriteDataE(SrcBE_Forwarding_wire),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),
    .clk(clk),
    .Stall(Stall),
    //////// Outputs //////
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M)
);

endmodule
