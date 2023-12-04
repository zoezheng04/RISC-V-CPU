#include <verilated.h>
#include "Valu.h"  // Replace "Valu" with the actual name of your Verilated module
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the Verilated module
    Valu* top = new Valu;

    int num_cycles = 20;

    // Apply inputs for a few cycles
    for (int i = 0; i < num_cycles; i++) {
        // Apply inputs
        // Modify inputs as needed for your test cases
        top->SrcA = 10;
        top->SrcB = 5;
        top->ALUControl = 0;  // Example: "ADDI" operation

        top->eval();
    }

    // Display results
    std::cout << "ALUResult: " << top->ALUResult << std::endl;
    std::cout << "Zero: " << static_cast<int>(top->Zero) << std::endl;

    // Cleanup
    delete top;
    exit(0);
}