module Memory (
    input logic           clk,
    input logic           RegWriteM,
    input logic [1:0]     ResultSrcM,
    input logic           MemWriteM,
    input logic [31:0]    ALUResultM,
    input logic [31:0]    WriteDataM,
    input logic [4:0]     RdM,

    output logic          RegWriteW,
    output logic [1:0]    ResultSrcW,
    output logic [31:0]   ALUResultW,
    output logic [31:0]   ReadDataW,
    output logic [4:0]    RdW,
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
    .clk(clk),
    //////// Outputs ///////
    .RegWriteW(RegWriteW),
    .ResultSrcW(ResultSrcW),
    .ReadDataW(ReadDataW),
    .RdW(RdW),
    .ALUResultW(ALUResultW),
);
    
endmodule
