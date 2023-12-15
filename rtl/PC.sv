module PC(
    input   logic              clk,
    input   logic              rst,
    input   logic [31:0]       PCNext,
    input   logic              Stall,
    input   logic              MissPredictionE,

    output  logic [31:0]       PC
);

    always_ff @ (posedge clk or posedge MissPredictionE) begin
 
        if (~Stall) begin
            if (rst)
            PC <= 32'b0;
            else
            PC <= PCNext;
        end
    end

endmodule
