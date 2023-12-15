#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "iostream"
#define MAX_SIM_CYC 350000

int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("Vtop.vcd");

    // Initialize Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("RISC-V");
    vbdBar(0);
    vbdSetMode(1);
    
    top->reset = 0;
    top->trigger = 0;
    

    for (i=0; i<MAX_SIM_CYC; i++){
        
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        //pdf plot:
        top->trigger = 1;

        if(i > 330000 && (i % 8 == 0)){
            vbdPlot(int(top->a0), 0, 255);
            vbdCycle(i+1);
        }

        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) exit(0);
        
    }
    vbdClose();
    tfp->close();
    exit(0);
}
