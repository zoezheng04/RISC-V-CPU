module RegF (
    input logic [31:0]      InstrF,
    input logic [31:0]      PCPlus4F,
    input logic             clk,
    input logic             Stall,

    output logic [31:0]    InstrD,
    output logic [31:0]    PCPlus4D
);

    always_ff @( negedge clk) begin

        if(Stall == 0) begin
            InstrD   <= InstrF;
            PCPlus4D <= PCPlus4F;
        end
    end

endmodule
