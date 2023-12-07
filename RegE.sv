module RegE (
    input logic                 RegWriteE,
    input logic  [1:0]          ResultSrcE,
    input logic                 MemWriteE,
    input logic  [31:0]         ALUResultE,
    input logic                 WriteDataE,
    input logic  [4:0]          RdE,
    input logic  [31:0]         PCPlus4E,
    input logic                 clk,
    
    output logic                 RegWriteM,
    output logic  [1:0]          ResultSrcM,
    output logic                 MemWriteM,
    output logic  [31:0]         ALUResultM,
    output logic                 WriteDataM,
    output logic  [4:0]          RdM,
    output logic  [31:0]         PCPlus4M

);

always_ff @(negedge clk) begin

    RegWriteM   <= RegWriteE;
    ResultSrcM  <= ResultSrcE;
    MemWriteM   <= MemWriteE;
    ALUResultM  <= ALUResultE;
    WriteDataM  <= WriteDataE;
    RdM         <= RdE;
    PCPlus4M    <= PCPlus4E;
end
    
endmodule
