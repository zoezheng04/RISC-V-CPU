#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "iostream"
#define MAX_SIM_CYC 40000

int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("Vtop.vcd");

    //init Vbuddy
    // if(vbdOpen()!=1) return(-1);
    // vbdHeader("RISC-V");

    // vbdSetMode(1);
    
    top->reset = 0;
    top->trigger = 1;
    

    for (i=0; i<MAX_SIM_CYC; i++){
        
        
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        // vbdBar(top->a0 & 0xFF);
        // //f1 lights and display:
        // vbdBar(top->a0 & 0xFF);
        // vbdHex(4, (int(top->a0) >> 16) & 0xF);
        // vbdHex(3, (int(top->a0) >> 8) & 0xF);
        // vbdHex(2, (int(top->a0) >> 4) & 0xF);
        // vbdHex(1, int(top->a0) & 0xF);
        // vbdCycle(i);

        //pdf plot:
        // if(i > 330000){
        //     vbdPlot(int(top->a0), 0, 255);
        //     vbdCycle(i+1);
        // }
        
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) exit(0);
        
    }

    //vbdClose();
    tfp->close();
    exit(0);

}