module RegF (
    input logic [31:0]      InstrF,
    input logic [31:0]      PCPlus4F,
    input logic             clk,
    input logic             Stall,
    input logic             FlushF,

    output logic [31:0]    InstrD,
    output logic [31:0]    PCPlus4D
);

    always_ff @( negedge clk) begin

        if((Stall == 0) && (FlushF == 0)) begin
            InstrD   <= InstrF;
            PCPlus4D <= PCPlus4F;
        end
        if (FlushF) begin
            InstrD   <= 0'h00000013;
            PCPlus4D <= 0;
        end
    end

endmodule
