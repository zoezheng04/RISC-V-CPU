// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu1.h for the primary calling header

#include "verilated.h"

#include "Vcpu1__Syms.h"
#include "Vcpu1___024root.h"

void Vcpu1___024root___ctor_var_reset(Vcpu1___024root* vlSelf);

Vcpu1___024root::Vcpu1___024root(Vcpu1__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu1___024root___ctor_var_reset(this);
}

void Vcpu1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcpu1___024root::~Vcpu1___024root() {
}
