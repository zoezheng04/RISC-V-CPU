#include <verilated.h>
#include "Valu.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create an instance of the Verilated module
    Valu* top = new Valu;

    int num_cycles = 20;

    for (int control = 0; control < 14; control++) {
        // Apply inputs for each instruction
        top->SrcA = 1;
        top->SrcB = 1;
        top->ALUControl = control;

        // Evaluate the module
        top->eval();

        // Display results for each instruction
        std::cout << "Instruction: " << control << std::endl;
        std::cout << "ALUResult: " << top->ALUResult << std::endl;
        std::cout << "Zero: " << static_cast<int>(top->Zero) << std::endl;
    }

    // Cleanup
    delete top;
    exit(0);
}