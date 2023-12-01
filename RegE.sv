module RegE (
    input logic                 RegWriteE,
    input logic                 ResultSrcE,
    input logic                 MemWriteE,
    input logic                 ALUResultE,
    input logic                 WriteDataE,
    input logic                 RdE,
    input logic                 PCPlus4E,
    input logic                 clk,
    
    output logic                 RegWriteM,
    output logic                 ResultSrcM,
    output logic                 MemWriteM,
    output logic                 ALUResultM,
    output logic                 WriteDataM,
    output logic                 RdM,
    output logic                 PCPlus4M

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
