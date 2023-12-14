#include "Vtwo_way_set_associative_cache.h"
#include <verilated.h>
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the Verilated module
    Vtwo_way_set_associative_cache* top = new Vtwo_way_set_associative_cache;

    // Initialize simulation inputs
    top->clk = 0;
    top->write_enable = 1;
    top->address = 0;
    top->data = 0;

    // Write
    for (int i = 1; i < 5; ++i) {
        // Rising edge of the clock
        top->clk = 0;
        top->eval();

        // Set inputs
        top->clk = 1;
        top->address = i;
        top->data = i;

        // Falling edge of the clock
        top->clk = 0;
        top->eval();

        // Add a delay to allow the simulation to propagate changes
        Verilated::timeInc(1);

        // Display results
        std::cout << "Cycle: " << i << std::endl;
        std::cout << "Cache Hit: " << top->cache_hit << std::endl;
        std::cout << "Cache Data: " << top->cache_data << std::endl;
        std::cout << "Write Back Data: " << top->write_back_data << std::endl;
        std::cout << "Write Back Address: " << top->write_back_address << std::endl;
    }

    // Read
    top->write_enable = 0;
    for (int i = 5; i < 9; ++i) {
        // Rising edge of the clock
        top->clk = 0;
        top->eval();

        // Set inputs
        top->clk = 1;
        top->address = i;
        top->data = i;

        // Falling edge of the clock
        top->clk = 0;
        top->eval();

        // Add a delay to allow the simulation to propagate changes
        Verilated::timeInc(1);

        // Display results
        std::cout << "Cycle: " << i << std::endl;
        std::cout << "Cache Hit: " << top->cache_hit << std::endl;
        std::cout << "Cache Data: " << top->cache_data << std::endl;
        std::cout << "Write Back Data: " << top->write_back_data << std::endl;
        std::cout << "Write Back Address: " << top->write_back_address << std::endl;
    }

    // Cleanup
    delete top;
    exit(0);
}