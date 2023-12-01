// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataMemory__Syms.h"


void VDataMemory___024root__trace_chg_sub_0(VDataMemory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDataMemory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root__trace_chg_top_0\n"); );
    // Init
    VDataMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDataMemory___024root*>(voidSelf);
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDataMemory___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VDataMemory___024root__trace_chg_sub_0(VDataMemory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->WE));
    bufp->chgIData(oldp+2,(vlSelf->A),32);
    bufp->chgIData(oldp+3,(vlSelf->WD),32);
    bufp->chgIData(oldp+4,(vlSelf->RD),32);
}

void VDataMemory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root__trace_cleanup\n"); );
    // Init
    VDataMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDataMemory___024root*>(voidSelf);
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
