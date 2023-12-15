#include "Vdirect_mapped_cache.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the Verilated module
    Vdirect_mapped_cache* cache = new Vdirect_mapped_cache;

    // Write some data to the cache
    cache->clk = 0;
    cache->overwrite = 1;
    for (int i = 0; i < 4; i++) {
        cache->eval();
        cache->clk = 1;
        cache->address = i;
        cache->wr_data = i;
        cache->eval();
        cache->clk = 0;
        cache->eval();
        std::cout << "Write data " << i << " to cache at address " << i << std::endl;
    }
    cache->overwrite = 0;

    // Read the data back and check if it's correct
    for (int i = 1; i < 5; i++) {
        cache->eval();
        cache->clk = 1;
        cache->address = i;
        cache->eval();
        cache->clk = 0;
        cache->eval();
        std::cout << "Read data from cache at address " << i << ": " << std::hex << (int)cache->cache_data << std::endl;
        std::cout << "Cache hit status: " << (cache->cache_hit ? "Hit" : "Miss") << std::endl;
    }

    // Test overwrite functionality
    cache->overwrite = 1;
    cache->address = 0;
    cache->wr_data = 4;
    cache->eval();
    cache->clk = 1;
    cache->eval();
    cache->clk = 0;
    cache->eval();
    std::cout << "Overwrite data at address 0 with 4" << std::endl;

    // Read the data back and check if it's correct
    cache->eval();
    cache->clk = 1;
    cache->address = 0;
    cache->eval();
    cache->clk = 0;
    cache->eval();
    std::cout << "Read data from cache at address 0: " << std::hex << (int)cache->cache_data << std::endl;
    std::cout << "Cache hit status: " << (cache->cache_hit ? "Hit" : "Miss") << std::endl;

    // Cleanup
    cache->final();
    delete cache;

    return 0;
}