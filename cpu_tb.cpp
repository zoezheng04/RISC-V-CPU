#include "Vcpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vcpu* top = new Vcpu;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("cpu.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("RISV CPU");

    // vbdSetMode(1);
    
    top-> rst = 1;
    top-> rst = 0;
    

    for (i=0; i<1000; i++){
        
        top-> trigger = vbdFlag();
        
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        vbdBar(top->0 & 0xFF);

        // f1 lights and display:
        vbdBar(top->a0 & 0xFF);
        vbdHex(4, (int(top->a0) >> 16) & 0xF);
        vbdHex(3, (int(top->a0) >> 8) & 0xF);
        vbdHex(2, (int(top->a0) >> 4) & 0xF);
        vbdHex(1, int(top->a0) & 0xF);
        vbdCycle(i+1);
        
        // pdf plot:
        vbdPlot(int(top->a0), 0, 255);

        if (Verilated::gotFinish()) exit(0);
        
    }

    vbdClose();
    tfp->close();
    exit(0);

}