module PC #(
    parameter WIDTH = 32
)(
    input   logic              clk,
    input   logic              rst,
    input   logic [WIDTH-1:0]  PCNext,
    output  logic [WIDTH-1:0]  PC
);

    always_ff @ (posedge clk)
        if (rst)
            PC <= 32'b0;
        else
            PC <= PCNext;      
endmodule
