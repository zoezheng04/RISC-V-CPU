module RegF (
    input logic [31:0]      InstrF,
    input logic [31:0]      PCF,
    input logic [31:0]      PCPlus4F,
    input logic             clk,
    input logic             Stall,

    output logic [31:0]    InstrD,
    output logic [31:0]    PCD,
    output logic [31:0]    PCPlus4D
);
    
    always_ff @( negedge clk or posedge Stall) begin

        if(!Stall) begin
            // Only passing through values if Stall is 0
            InstrD   <= InstrF;
            PCD      <= PCF;
            PCPlus4D <= PCPlus4F;
        end

    end

endmodule
