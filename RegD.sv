module RegD (
    input logic                 RegWriteD,
    input logic                 ResultSrcD,
    input logic                 MemWriteD,
    input logic  [3:0]          ALUctrlD,
    input logic                 ALUsrcD,
    input logic  [31:0]         RD1D,
    input logic  [31:0]         RD2D,
    input logic  [4:0]          Rs1D,
    input logic  [4:0]          Rs2D,
    input logic  [4:0]          RdD,
    input logic  [31:0]         ExtImmD,
    input logic                 clk,
    input logic                 FlushE,

    output logic                 RegWriteE,
    output logic                 ResultSrcE,
    output logic                 MemWriteE,
    output logic  [3:0]          ALUctrlE,
    output logic                 ALUsrcE,
    output logic  [31:0]         RD1E,
    output logic  [31:0]         RD2E,
    output logic  [4:0]          Rs1E,
    output logic  [4:0]          Rs2E,
    output logic  [4:0]          RdE,
    output logic  [31:0]         ExtImmE

);
    
    always_ff @( negedge clk) begin
        
        if((FlushE == 0)) begin
            // Only passing through values if Stall and Flush is 0
            RegWriteE   <= RegWriteD;
            ResultSrcE  <= ResultSrcD;
            MemWriteE   <= MemWriteD;
            ALUctrlE    <= ALUctrlD;
            ALUsrcE     <= ALUsrcD;
            RD1E        <= RD1D;
            RD2E        <= RD2D;
            Rs1E        <= Rs1D;
            Rs2E        <= Rs2D;
            RdE         <= RdD;
            ExtImmE     <= ExtImmD;
        end
        if (FlushE) begin 
            RegWriteE   <= 0;
            ResultSrcE  <= 0;
            MemWriteE   <= 0;
            ALUctrlE    <= 0;
            ALUsrcE     <= 0;
            RD1E        <= 0;
            RD2E        <= 0;
            Rs1E        <= 0;
            Rs2E        <= 0;
            RdE         <= 0;
            ExtImmE     <= 0;
        end
    end

endmodule
