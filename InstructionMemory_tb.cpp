#include "VInstructionMemory.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    VInstructionMemory* top = new VInstructionMemory;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("InstructionMemory.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("RISV CPU");

    // vbdSetMode(1);
    
    top-> rst = 1;
    top-> rst = 0;
    top->trigger = 0;

    top->JumpSrc = 0;
    top->PCSrc = 0;
    

    for (i=0; i<300; i++){
        
        top-> trigger = vbdFlag();
        
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        if (Verilated::gotFinish()) exit(0);
        
    }

    vbdClose();
    tfp->close();
    exit(0);

}