module RegD (
    input logic                 RegWriteD,
    input logic                 ResultSrcD,
    input logic                 MemWriteD,
    input logic                 JumpSrcD,
    input logic                 PCSrcD,
    input logic  [2:0]          ALUctrlD,
    input logic                 ALUsrcD,
    input logic                 JRetSrcD,
    input logic                 RD1D,
    input logic                 RD2D,
    input logic                 PCD,
    input logic                 Rs1D,
    input logic                 Rs2D,
    input logic                 RdD,
    input logic                 ExtImmD,
    input logic                 PCPlus4D,
    input logic                 clk,

    output logic                 RegWriteE,
    output logic                 ResultSrcE,
    output logic                 MemWriteE,
    output logic                 JumpSrcE,
    output logic                 PCSrcE,
    output logic  [2:0]          ALUctrlE,
    output logic                 ALUsrcE,
    output logic                 JRetSrcE,
    output logic                 RD1E,
    output logic                 RD2E,
    output logic                 PCE,
    output logic                 Rs1E,
    output logic                 Rs2E,
    output logic                 RdE,
    output logic                 ExtImmE,
    output logic                 PCPlus4E,              

);
    
    always_ff @( negedge clk) begin
        
        RegWriteE   <= RegWriteD;
        ResultSrcE  <= ResultSrcD;
        MemWriteE   <= MemWriteD;
        JumpSrcE    <= JumpSrcD;
        PCSrcE      <= PCSrcD;
        ALUctrlE    <= ALUctrlD;
        ALUsrcE     <= ALUsrcD;
        JRetSrcE    <= JRetSrcD;
        RD1E        <= RD1D;
        RD2E        <= RD2D;
        PCE         <= PCD;
        Rs1E        <= Rs1D;
        Rs2E        <= Rs2D;
        RdE         <= RdD;
        ExtImmE    <= ExtImmD;
        PCPlus4E    <= PCPlus4D;

    end

endmodule
