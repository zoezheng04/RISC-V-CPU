module RegF (
    input logic [31:0]      InstrF,
    input logic [31:0]      PCPlus4F,
    input logic             clk,
    input logic             Stall,
    input logic             Flush,

    output logic [31:0]    InstrD,
    output logic [31:0]    PCPlus4D
);
    
    always_ff @( negedge clk or posedge Stall) begin

        if((Stall == 0) && (Flush == 0)) begin
            // Only passing through values if Stall is 0
            InstrD   <= InstrF;
            PCPlus4D <= PCPlus4F;
        end
        if (Flush) begin
            InstrD   <= 0;
            PCPlus4D <= 0;
        end
    end

endmodule
