// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


VL_ATTR_COLD void Vtest___024root__trace_init_sub__TOP__0(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"addr", false,-1, 31,0);
    tracep->declBus(c+3,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+4,"Imm_o", false,-1, 31,0);
    tracep->pushNamePrefix("test ");
    tracep->declBus(c+6,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"addr", false,-1, 31,0);
    tracep->declBus(c+3,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+4,"Imm_o", false,-1, 31,0);
    tracep->declBus(c+5,"instr_wire", false,-1, 31,0);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+6,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"Imm_i", false,-1, 31,0);
    tracep->declBus(c+3,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+4,"Imm_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("input_s ");
    tracep->declBus(c+6,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"addr", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+5,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest___024root__trace_init_top(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_top\n"); );
    // Body
    Vtest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest___024root__trace_register(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest___024root__trace_full_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_top_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest___024root__trace_full_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullIData(oldp+2,(vlSelf->addr),32);
    bufp->fullCData(oldp+3,(vlSelf->ImmSrc),3);
    bufp->fullIData(oldp+4,(vlSelf->Imm_o),32);
    bufp->fullIData(oldp+5,(vlSelf->test__DOT__instr_wire),32);
    bufp->fullIData(oldp+6,(0x20U),32);
    bufp->fullIData(oldp+7,(8U),32);
}
