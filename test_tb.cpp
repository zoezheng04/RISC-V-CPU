#include "Vtest.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vtest* top = new Vtest;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("test.vcd");

    top->EQ = 0;
    top->PCSrc = 0;
    top->ImmOp = 0;

    for (i=0; i<100; i++){

        for(clk=0; clk<2; clk++){

            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        if (Verilated::gotFinish()) exit(0);
    }

    tfp->close();
    exit(0);

}