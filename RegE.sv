module RegE (
    input logic                 RegWriteE,
    input logic  [1:0]          ResultSrcE,
    input logic                 MemWriteE,
    input logic  [31:0]         ALUResultE,
    input logic                 WriteDataE,
    input logic  [4:0]          RdE,
    input logic  [31:0]         PCPlus4E,
    input logic                 clk,
    input logic                 FlushE,
    
    output logic                 RegWriteM,
    output logic  [1:0]          ResultSrcM,
    output logic                 MemWriteM,
    output logic  [31:0]         ALUResultM,
    output logic                 WriteDataM,
    output logic  [4:0]          RdM,
    output logic  [31:0]         PCPlus4M

);

always_ff @(negedge clk) begin

    if(~FlushE) begin
        // Only passing through values if Stall is 0
        RegWriteM   <= RegWriteE;
        ResultSrcM  <= ResultSrcE;
        MemWriteM   <= MemWriteE;
        ALUResultM  <= ALUResultE;
        WriteDataM  <= WriteDataE;
        RdM         <= RdE;
        PCPlus4M    <= PCPlus4E;
    end else begin
        RegWriteM   <= 0;
        ResultSrcM  <= 0;
        MemWriteM   <= 0;
        ALUResultM  <= 0;
        WriteDataM  <= 0;
        RdM         <= 0;
        PCPlus4M    <= 0;
    end
end
    
endmodule
