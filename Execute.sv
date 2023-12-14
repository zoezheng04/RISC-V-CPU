module Execute (
    input logic            clk,
    input logic            RegWriteE,
    input logic            ResultSrcE,
    input logic            MemWriteE,
    input logic  [3:0]     ALUctrlE,
    input logic            ALUsrcE,
    input logic  [31:0]    RD1E,
    input logic  [31:0]    RD2E,
    input logic  [4:0]     RdE,
    input logic  [31:0]    ExtImmE,
    input logic  [1:0]     ForwardAE,
    input logic  [1:0]     ForwardBE,
    input logic  [31:0]    ResultW,
    input logic            MemTypeE,

    output logic           RegWriteM,
    output logic           ResultSrcM,
    output logic           MemWriteM,
    output logic [31:0]    ALUResultM,
    output logic [31:0]    WriteDataM,
    output logic [4:0]     RdM,
    output logic           MemTypeM
);

///////////////// Wires ///////////////////
////////////// ALU Wires //////////////////
logic   [31:0]    SrcAE_wire;
logic   [31:0]    SrcBE_wire;
logic   [31:0]    SrcBE_Forwarding_wire;
logic   [31:0]    Result_wire;
    
always_comb begin
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
assign SrcBE_wire = ALUsrcE ? ExtImmE : SrcBE_Forwarding_wire;
end
/////////// Instantiate Modules ///////////

alu ALU(
    ///////// Inputs ////////
    .SrcA(SrcAE_wire),
    .SrcB(SrcBE_wire),
    .ALUControl(ALUctrlE),
    //////// Outputs ///////
    .ALUResult(Result_wire)
);

RegE Pipeline_RegisterE(
    ///////// Inputs ////////
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .ALUResultE(Result_wire),
    .WriteDataE(SrcBE_Forwarding_wire),
    .RdE(RdE),
    .clk(clk),
    .MemTypeE(MemTypeE),
    //////// Outputs //////
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .MemTypeM(MemTypeM)
);

endmodule