module RegE (
    input logic                 RegWriteE,
    input logic                 ResultSrcE,
    input logic                 MemWriteE,
    input logic  [31:0]         ALUResultE,
    input logic                 WriteDataE,
    input logic  [4:0]          RdE,
    input logic                 clk,
    
    output logic                 RegWriteM,
    output logic                 ResultSrcM,
    output logic                 MemWriteM,
    output logic  [31:0]         ALUResultM,
    output logic                 WriteDataM,
    output logic  [4:0]          RdM

);

always_ff @(negedge clk) begin

    RegWriteM   <= RegWriteE;
    ResultSrcM  <= ResultSrcE;
    MemWriteM   <= MemWriteE;
    ALUResultM  <= ALUResultE;
    WriteDataM  <= WriteDataE;
    RdM         <= RdE;
end
    
endmodule
