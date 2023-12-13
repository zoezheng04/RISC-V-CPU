module Memory (
    input logic           clk,
    input logic           RegWriteM,
    input logic [1:0]     ResultSrcM,
    input logic           MemWriteM,
    input logic [31:0]    ALUResultM,
    input logic [31:0]    WriteDataM,
    input logic [4:0]     RdM,
    input logic [31:0]    PCPlus4M,

    output logic          RegWriteW,
    output logic [1:0]    ResultSrcW,
    output logic [31:0]   ALUResultW,
    output logic [31:0]   ReadDataW,
    output logic [4:0]    RdW,
    output logic [31:0]   PCPlus4W
);

////////////////// Wires //////////////////
logic   [31:0]           RD_wire;

/////////// Instantiate Modules ///////////

DataMemory DataMemory(
    ///////// Inputs ////////
    .clk(clk),
    .WE(MemWriteM),
    .A(ALUResultM),
    .WD(WriteDataM),
    //////// Outputs ///////
    .RD(RD_wire)
);

RegM Pipeline_RegisterM(
    ///////// Inputs ////////
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .ReadDataM(RD_wire),
    .RdM(RdM),
    .ALUResultM(ALUResultM),
    .PCPlus4M(PCPlus4M),
    .clk(clk),
    //////// Outputs ///////
    .RegWriteW(RegWriteW),
    .ResultSrcW(ResultSrcW),
    .ReadDataW(ReadDataW),
    .RdW(RdW),
    .ALUResultW(ALUResultW),
    .PCPlus4W(PCPlus4W)

);
    
endmodule
