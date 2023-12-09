#include "Vcpu1.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vcpu1* top = new Vcpu1;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("cpu1.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("RISV CPU");

    // vbdSetMode(1);
    
    top->rst = 1;
    top->rst = 0;
    top->trigger = 1;
    

    for (i=0; i<MAX_SIM_CYC; i++){
        
        top->trigger = vbdFlag();
        
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        // vbdBar(top->a0 & 0xFF);

        // // //f1 lights and display:
        // vbdBar(top->a0 & 0xFF);
        // vbdHex(4, (int(top->a0) >> 16) & 0xF);
        // vbdHex(3, (int(top->a0) >> 8) & 0xF);
        // vbdHex(2, (int(top->a0) >> 4) & 0xF);
        // vbdHex(1, int(top->a0) & 0xF);
        // vbdCycle(i);
        
        //pdf plot:
        if(i > 800000){
            vbdPlot(int(top->a0), 0, 255);
            vbdCycle(i);
        }

        if (Verilated::gotFinish()) exit(0);
        
    }

    vbdClose();
    tfp->close();
    exit(0);

}