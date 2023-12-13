module top (
    input logic             clk,
    input logic             reset,
    input logic             trigger, // trigger not implemented!

    output logic [31:0]     a0
);

//////////////////// WIRES /////////////////////
logic [31:0]        InstrD_wire, ExtImmE_wire, ALUResultM_wire, ALUResultW_wire, ResultW_wire;
logic [31:0]        PCD_wire, PCE_wire, PCTargetE_wire, ReadDataW_wire;
logic [31:0]        PCPlus4D_wire, PCPlus4E_wire, PCPlus4M_wire, PCPlus4W_wire, WriteDataM_wire;

logic               RegWriteE_wire, RegWriteM_wire, RegWriteW_wire, Stall_wire;
logic [1:0]         ResultSrcE_wire, ResultSrcM_wire, ResultSrcW_wire, ForwardAE_wire, ForwardBE_wire, ALUctrlE_wire;
logic               MemWriteE_wire, MemWriteM_wire, EQ_wire;
logic               JumpSrcE_wire, JRetSrcE_wire, PCSrcE_wire, PCSrcE_o_wire, ALUsrcE_wire;
logic [4:0]         RD1E_wire, RD2E_wire, Rs1E_wire, Rs2E_wire, RdE_wire, RdM_wire, RdW_wire;


//////////////////// FETCH /////////////////////
Fetch Fetch_Stage(
    .clk(clk),
    .reset(reset),
    .trigger(trigger), 
    .Stall(Stall_wire),
    .PCTargetE(PCTargetE_wire),
    .PCSrcE(PCSrcE_o_wire),

    .InstrD(InstrD_wire),
    .PCD(PCD_wire),
    .PCPlus4D(PCPlus4D_wire) 
);

//////////////////// DECODE /////////////////////
Decode Decode_Stage(
    .clk(clk),
    .Stall(Stall_wire),
    .InstrD(InstrD_wire),
    .PCD(PCD_wire),
    .PCPlus4D(PCPlus4D_wire),
    .RegWriteW(RegWriteW_wire),
    .RdW(RdW_wire),
    .ResultW(ResultW_wire),
    .EQ(EQ_wire),

    .RegWriteE(RegWriteE_wire),
    .ResultSrcE(ResultSrcE_wire),
    .MemWriteE(MemWriteE_wire),
    .JumpSrcE(JumpSrcE_wire),
    .PCSrcE(PCSrcE_wire),
    .ALUctrlE(ALUctrlE_wire),
    .ALUsrcE(ALUsrcE_wire),
    .JRetSrcE(JRetSrcE_wire),
    .RD1E(RD1E_wire),
    .RD2E(RD2E_wire),
    .PCE(PCE_wire),
    .Rs1E(Rs1E_wire),
    .Rs2E(Rs2E_wire),
    .RdE(RdE_wire),
    .ExtImmE(ExtImmE_wire),
    .PCPlus4E(PCPlus4E_wire),
    .a0(a0)
);

//////////////////// EXECUTE ////////////////////
Execute Execute_Stage(
    .clk(clk),
    .Stall(Stall_wire),
    .RegWriteE(RegWriteE_wire),
    .ResultSrcE(ResultSrcE_wire),
    .MemWriteE(MemWriteE_wire),
    .JumpSrcE(JumpSrcE_wire),
    .PCSrcE(PCSrcE_wire),
    .ALUctrlE(ALUctrlE_wire),
    .ALUsrcE(ALUsrcE_wire),
    .JRetSrcE(JRetSrcE_wire),
    .RD1E(RD1E_wire),
    .RD2E(RD2E_wire),
    .PCE(PCE_wire),
    .RdE(RdE_wire),
    .ExtImmE(ExtImmE_wire),
    .PCPlus4E(PCPlus4E_wire),
    .ForwardAE(ForwardAE_wire),
    .ForwardBE(ForwardBE_wire),
    .ResultW(ResultW_wire),

    .RegWriteM(RegWriteM_wire),
    .ResultSrcM(ResultSrcM_wire),
    .MemWriteM(MemWriteM_wire),
    .ALUResultM(ALUResultM_wire),
    .WriteDataM(WriteDataM_wire),
    .RdM(RdM_wire)
    .PCPlus4M(PCPlus4M_wire),
    .PCSrcE_o(PCSrcE_o_wire),
    .PCTargetE(PCTargetE_wire),
    .EQ(EQ_wire)
);

//////////////////// MEMORY /////////////////////
Memory Memory_Stage(
    .clk(clk),
    .RegWriteM(RegWriteM_wire),
    .ResultSrcM(ResultSrcM_wire),
    .MemWriteM(MemWriteM_wire),
    .ALUResultM(ALUResultM_wire),
    .WriteDataM(WriteDataM_wire),
    .RdM(RdM_wire),
    .PCPlus4M(PCPlus4M_wire),

    .RegWriteW(RegWriteW_wire),
    .ResultSrcW(ResultSrcW_wire),
    .ALUResultW(ALUResultW_wire),
    .ReadDataW(ReadDataW_wire),
    .RdW(RdW_wire),
    .PCPlus4W(PCPlus4W_wire)
);

//////////////////// WRITE BACK /////////////////
WriteBack WriteBack_Stage(
    .RegWriteW(RegWriteW_wire),
    .ResultSrcW(ResultSrcW_wire),
    .ALUResultW(ALUResultW_wire),
    .ReadDataW(ReadDataW_wire),
    .PCPlus4W(PCPlus4W_wire),

    .ResultW(ResultW_wire)
);

//////////////////// HAZARD UNIT/////////////////
HazardUnit HazardUnit(
    .Rs1E(Rs1E_wire),
    .Rs2E(Rs2E_wire),
    .RdM(RdM_wire),
    .RegWriteM(RegWriteM_wire),
    .RdW(RdW_wire),
    .RegWriteW(RegWriteW_wire),
    .IsLoadW(ResultSrcW_wire),    
    .clk(clk),

    .ForwardAE(ForwardAE_wire),  
    .ForwardBE(ForwardBE_wire),  
    .Stall(Stall_wire)
);

endmodule
