#include "Vrom.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vrom* top = new Vrom;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("rom.vcd");

    //init Vbuddy
    // if(vbdOpen()!=1) return(-1);
    // vbdHeader("Lab 4: Counter");

    for (i=0; i<20; i++){

        for(clk=0; clk<2; clk++){

            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        top->addr = i*4;
        std::cout << top->dout << std::endl;

        // ++++ Send count value to Vbuddy
        // vbdHex(4, (int(top->dout) >> 16) & 0xF);
        // vbdHex(3, (int(top->dout) >> 8) & 0xF);
        // vbdHex(2, (int(top->dout) >> 4) & 0xF);
        // vbdHex(1, int(top->dout) & 0xF);
        // vbdCycle(i+1);
        // ---- end of vbuddy output section

        if (Verilated::gotFinish()) exit(0);
    }

    // vbdClose();
    tfp->close();
    exit(0);

}