module top (
    input logic             clk,
    input logic             reset,
    input logic             trigger,

    output logic [31:0]     a0
);

//////////////////// WIRES /////////////////////
logic [31:0]        InstrD_wire, ExtImmE_wire, ALUResultM_wire, ALUResultW_wire, ResultW_wire;
logic [31:0]        PCBranchD_wire, ReadDataW_wire;
logic [31:0]        PCPlus4D_wire, WriteDataM_wire, RD1E_wire, RD2E_wire;
logic [3:0]         ALUctrlE_wire;
logic               RegWriteE_wire, RegWriteM_wire, RegWriteW_wire, StallF_wire, StallPC_wire;
logic [1:0]         ForwardAE_wire, ForwardBE_wire;
logic               MemWriteE_wire, MemWriteM_wire, ForwardAD_wire, ForwardBD_wire;
logic               PCSrcD_wire, ALUsrcE_wire, MemTypeE_wire, MemTypeM_wire;
logic [4:0]         Rs1E_wire, Rs2E_wire, RdE_wire, RdM_wire, RdW_wire, Rs1D_wire, Rs2D_wire;
logic               ResultSrcE_wire, ResultSrcM_wire, ResultSrcW_wire, BranchD_wire, FlushD_wire;
//////////////////// FETCH /////////////////////
Fetch Fetch_Stage(
    /////// INPUTS ////////
    .clk(clk),
    .reset(reset),
    .trigger(trigger), 
    .StallPC(StallPC_wire),
    .StallF(StallF_wire),
    .PCBranchD(PCBranchD_wire),
    .PCSrcD(PCSrcD_wire),
    .BranchD(BranchD_wire),
    /////// OUTPUTS ///////
    .InstrD(InstrD_wire),
    .PCPlus4D(PCPlus4D_wire) 
);

//////////////////// DECODE /////////////////////
Decode Decode_Stage(
    /////// INPUTS ////////
    .clk(clk),
    .FlushD(FlushD_wire),
    .InstrD(InstrD_wire),
    .PCPlus4D(PCPlus4D_wire),
    .RegWriteW(RegWriteW_wire),
    .RdW(RdW_wire),
    .ResultW(ResultW_wire),
    .ALUOutM(ALUResultM_wire),
    .ForwardAD(ForwardAD_wire),
    .ForwardBD(ForwardBD_wire),
    /////// OUTPUTS ///////
    .RegWriteE(RegWriteE_wire),
    .ResultSrcE(ResultSrcE_wire),
    .MemWriteE(MemWriteE_wire),
    .PCSrcD(PCSrcD_wire),
    .ALUctrlE(ALUctrlE_wire),
    .ALUsrcE(ALUsrcE_wire),
    .RD1E(RD1E_wire),
    .RD2E(RD2E_wire),
    .Rs1E(Rs1E_wire),
    .Rs2E(Rs2E_wire),
    .Rs1D(Rs1D_wire),
    .Rs2D(Rs2D_wire),
    .RdE(RdE_wire),
    .ExtImmE(ExtImmE_wire),
    .PCBranchD(PCBranchD_wire),
    .BranchD(BranchD_wire),
    .MemTypeE(MemTypeE_wire),
    .a0(a0)
);

//////////////////// EXECUTE ////////////////////
Execute Execute_Stage(
    /////// INPUTS ////////
    .clk(clk),
    .RegWriteE(RegWriteE_wire),
    .ResultSrcE(ResultSrcE_wire),
    .MemWriteE(MemWriteE_wire),
    .ALUctrlE(ALUctrlE_wire),
    .ALUsrcE(ALUsrcE_wire),
    .RD1E(RD1E_wire),
    .RD2E(RD2E_wire),
    .RdE(RdE_wire),
    .ExtImmE(ExtImmE_wire),
    .ForwardAE(ForwardAE_wire),
    .ForwardBE(ForwardBE_wire),
    .ResultW(ResultW_wire),
    .MemTypeE(MemTypeE_wire),
    /////// OUTPUTS ///////
    .RegWriteM(RegWriteM_wire),
    .ResultSrcM(ResultSrcM_wire),
    .MemWriteM(MemWriteM_wire),
    .ALUResultM(ALUResultM_wire),
    .WriteDataM(WriteDataM_wire),
    .RdM(RdM_wire),
    .MemTypeM(MemTypeM_wire)
);

//////////////////// MEMORY /////////////////////
Memory Memory_Stage(
    /////// INPUTS ////////
    .clk(clk),
    .RegWriteM(RegWriteM_wire),
    .ResultSrcM(ResultSrcM_wire),
    .MemWriteM(MemWriteM_wire),
    .ALUResultM(ALUResultM_wire),
    .WriteDataM(WriteDataM_wire),
    .RdM(RdM_wire),
    .MemTypeM(MemTypeM_wire),
    /////// OUTPUTS ///////
    .RegWriteW(RegWriteW_wire),
    .ResultSrcW(ResultSrcW_wire),
    .ALUResultW(ALUResultW_wire),
    .ReadDataW(ReadDataW_wire),
    .RdW(RdW_wire)
);

//////////////////// WRITE BACK /////////////////
WriteBack WriteBack_Stage(
    /////// INPUTS ////////
    .ResultSrcW(ResultSrcW_wire),
    .ALUResultW(ALUResultW_wire),
    .ReadDataW(ReadDataW_wire),
    /////// OUTPUTS ///////
    .ResultW(ResultW_wire)
);

//////////////////// HAZARD UNIT/////////////////
HazardUnit HazardUnit(
    /////// INPUTS ////////
    .Rs1E(Rs1E_wire),
    .Rs2E(Rs2E_wire),
    .Rs1D(Rs1D_wire),
    .Rs2D(Rs2D_wire),
    .BranchD(BranchD_wire),
    .RegWriteE(RegWriteE_wire),
    .ResultSrcE(ResultSrcE_wire),
    .ResultSrcM(ResultSrcM_wire),
    .WriteRegE(RdE_wire),
    .RdM(RdM_wire),
    .RegWriteM(RegWriteM_wire),
    .RdW(RdW_wire),
    .RegWriteW(RegWriteW_wire),
    /////// OUTPUTS ///////
    .ForwardAE(ForwardAE_wire),  
    .ForwardBE(ForwardBE_wire),  
    .ForwardAD(ForwardAD_wire),
    .ForwardBD(ForwardBD_wire),
    .StallF(StallF_wire),
    .StallPC(StallPC_wire),
    .FlushD(FlushD_wire)
);

endmodule
