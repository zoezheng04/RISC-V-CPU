#include "VDataMemory.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    VDataMemory* top = new VDataMemory;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("DataMemory.vcd");

    // initalise simulation inputs
    top->WE = 0;

    // run simulation for many clock cycles
    for (i=0; i<20; i++) {

        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);        // unit is in ps!!!
            top->clk = !top->clk;
            top->eval ();
        }
        top->A = i*4 + 65536; // increment A by 4 to read 32 bits, 65536 is h10000 in decimal
        std::cout << top->RD << std::endl;
        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
