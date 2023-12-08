module RegD (
    input logic                 RegWriteD,
    input logic  [1:0]          ResultSrcD,
    input logic                 MemWriteD,
    input logic                 PCSrcD,
    input logic  [3:0]          ALUctrlD,
    input logic                 ALUsrcD,
    input logic                 RegDestD,
    input logic  [4:0]          RD1D,
    input logic  [4:0]          RD2D,
    input logic  [4:0]          Rs1D,
    input logic  [4:0]          Rs2D,
    input logic  [4:0]          RdD,
    input logic  [31:0]         ExtImmD,
    input logic  [31:0]         PCPlus4D,
    input logic                 clk,
    input logic                 Stall,
    input logic                 Flush,

    output logic                 RegWriteE,
    output logic  [1:0]          ResultSrcE,
    output logic                 MemWriteE,
    output logic                 PCSrcE,
    output logic  [3:0]          ALUctrlE,
    output logic                 ALUsrcE,
    output logic                 RegDestE,
    output logic  [4:0]          RD1E,
    output logic  [4:0]          RD2E,
    output logic  [4:0]          Rs1E,
    output logic  [4:0]          Rs2E,
    output logic  [4:0]          RdE,
    output logic  [31:0]         ExtImmE

);
    
    always_ff @( negedge clk) begin
        
        if((Stall == 0) && (Flush == 0)) begin
            // Only passing through values if Stall and Flush is 0
            RegWriteE   <= RegWriteD;
            ResultSrcE  <= ResultSrcD;
            MemWriteE   <= MemWriteD;
            PCSrcE      <= PCSrcD;
            ALUctrlE    <= ALUctrlD;
            ALUsrcE     <= ALUsrcD;
            RegDestE    <= RegDestD;
            RD1E        <= RD1D;
            RD2E        <= RD2D;
            Rs1E        <= Rs1D;
            Rs2E        <= Rs2D;
            RdE         <= RdD;
            ExtImmE    <= ExtImmD;
        end
        if (Flush) begin 
            RegWriteE   <= 0;
            ResultSrcE  <= 0;
            MemWriteE   <= 0;
            PCSrcE      <= 0;
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
