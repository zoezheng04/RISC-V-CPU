module RegF (
    input logic             InstrF,
    input logic             PCF,
    input logic             PCPlus4F,
    input logic             clk,

    output logic            InstrD,
    output logic            PCD,
    output logic            PCPlus4D
);
    
always_ff @( negedge clk ) begin

    InstrD   <= InstrF;
    PCD      <= PCF;
    PCPlus4D <= PCPlus4F;
    
end

endmodule
