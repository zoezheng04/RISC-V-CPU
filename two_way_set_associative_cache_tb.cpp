#include "Vtwo_way_set_associative_cache.h"
#include <verilated.h>
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv, char **env){

    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vtwo_way_set_associative_cache* top = new Vtwo_way_set_associative_cache;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("two_way_set_associative_cache.vcd");

    // Initialize simulation inputs
    top->clk = 0;
    top->write_enable = 1;
    top->address = 0;
    top->data = 0;

    // Write
    for (i=0; i<9; i++){
        
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        if(i < 5){
            top->address = 23*i;
            top->data = 23*i;  
        }
        else{
            top->write_enable = 0;
            top->address = 23*(i - 4);
            top->data = 23*(i - 4);
        }

        // Display results
        std::cout << "Cycle: " << i << std::endl;
        std::cout << "Cache Hit: " << top->cache_hit << std::endl;
        std::cout << "Cache Data: " << top->cache_data << std::endl;
        std::cout << "Write Back Data: " << top->write_back_data << std::endl;
        std::cout << "Write Back Address: " << top->write_back_address << std::endl;
    }

    // Cleanup
    tfp->close();
    exit(0);
}