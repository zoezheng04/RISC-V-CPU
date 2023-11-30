#include "Vtest.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
// #include "vbuddy.cpp"
#include <iostream>

int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vtest* top = new Vtest;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("test.vcd");

    //init Vbuddy
    // if(vbdOpen()!=1) return(-1);
    // vbdHeader("Lab 4: Counter");

    top->ImmSrc = 3;

    for (i=0; i<20; i++){

        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        top->addr = i;

        if (Verilated::gotFinish()) exit(0);
        
    }

    // vbdClose();
    tfp->close();
    exit(0);

}