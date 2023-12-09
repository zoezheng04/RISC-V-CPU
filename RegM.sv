module RegM (
    
    input logic             RegWriteM,
    input logic  [1:0]      ResultSrcM,
    input logic  [31:0]     ReadDataM,
    input logic  [4:0]      RdM,
    input logic  [31:0]     ALUResultM,
    input logic             clk,

    output logic            RegWriteW,
    output logic  [1:0]     ResultSrcW,
    output logic  [31:0]    ReadDataW,
    output logic  [4:0]     RdW,
    output logic  [31:0]    ALUResultW,
    
);

always_ff @(negedge clk) begin

    RegWriteW   <= RegWriteM;
    ResultSrcW  <= ResultSrcM;
    ReadDataW   <= ReadDataM;
    RdW         <= RdM;
    ALUResultW  <= ALUResultM;    
end
    
endmodule
