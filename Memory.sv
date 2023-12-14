module Memory (
    input logic           clk,
    input logic           RegWriteM,
    input logic           ResultSrcM,
    input logic           MemWriteM,
    input logic [31:0]    ALUResultM,
    input logic [31:0]    WriteDataM,
    input logic [4:0]     RdM,
    input logic           MemTypeM,

    output logic          RegWriteW,
    output logic          ResultSrcW,
    output logic [31:0]   ALUResultW,
    output logic [31:0]   ReadDataW,
    output logic [4:0]    RdW
);

////////////////// Wires //////////////////
logic   [31:0]           RD_wire;

/////////// Instantiate Modules ///////////

cached_memory memory(
    ///////// Inputs ////////
    .clk(clk),
    .WE(MemWriteM),
    .addr(ALUResultM),
    .Write_Data(WriteDataM),
    .MemType(MemTypeM),
    //////// Outputs ///////
    .Data_o(RD_wire)
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
    .ALUResultW(ALUResultW)
);
    
endmodule
