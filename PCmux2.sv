module PCmux2 #(
    parameter WIDTH = 32
)(
    input   logic [WIDTH-1:0]    i0,
    input   logic [WIDTH-1:0]    i1,
    input   logic                sel,
    output  logic [WIDTH-1:0]    m_out
);

    always_comb 
    begin
        m_out = sel ? i1 : i0;
    end
endmodule
