module PCReg #(
    parameter WIDTH = 32
)(
    input   logic              clk,
    input   logic              rst,
    input   logic [WIDTH-1:0]  next_PC,
    output  logic [WIDTH-1:0]  PC
);

    always_ff @ (posedge clk)
        if (rst)
            PC <= 32'h0;
        else
            PC <= next_PC;      
endmodule
