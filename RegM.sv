module RegM (
    
    input logic             RegWriteM,
    input logic             ResultSrcM,
    input logic             ReadDataM,
    input logic             RdM,
    input logic             ALUResultM,
    input logic             PCPlus4M,
    input logic             clk,

    output logic            RegWriteW,
    output logic            ResultSrcW,
    output logic            ReadDataW,
    output logic            RdW,
    output logic            ALUResultW,
    output logic            PCPlus4W
    
);

always_ff @(negedge clk) begin

    RegWriteW   <= RegWriteM;
    ResultSrcW  <= ResultSrcM;
    ReadDataW   <= ReadDataM;
    RdW         <= RdM;
    ALUResultW  <= ALUResultM;
    PCPlus4W    <= PCPlus4M;

end
    
endmodule
