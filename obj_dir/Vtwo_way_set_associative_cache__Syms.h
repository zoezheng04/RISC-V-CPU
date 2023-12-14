// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTWO_WAY_SET_ASSOCIATIVE_CACHE__SYMS_H_
#define VERILATED_VTWO_WAY_SET_ASSOCIATIVE_CACHE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtwo_way_set_associative_cache.h"

// INCLUDE MODULE CLASSES
#include "Vtwo_way_set_associative_cache___024root.h"

// SYMS CLASS (contains all model state)
class Vtwo_way_set_associative_cache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtwo_way_set_associative_cache* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtwo_way_set_associative_cache___024root TOP;

    // CONSTRUCTORS
    Vtwo_way_set_associative_cache__Syms(VerilatedContext* contextp, const char* namep, Vtwo_way_set_associative_cache* modelp);
    ~Vtwo_way_set_associative_cache__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
