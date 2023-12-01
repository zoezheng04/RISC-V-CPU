// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


void Vtest___024root__trace_chg_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_chg_top_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest___024root__trace_chg_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->test__DOT__instr_wire),32);
        bufp->chgCData(oldp+1,((0x7fU & vlSelf->test__DOT__instr_wire)),7);
        bufp->chgCData(oldp+2,((7U & (vlSelf->test__DOT__instr_wire 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+3,((1U & (vlSelf->test__DOT__instr_wire 
                                    >> 0x1eU))));
        bufp->chgCData(oldp+4,(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O),7);
        bufp->chgIData(oldp+5,(vlSelf->test__DOT__in__DOT__pcwire),32);
        bufp->chgIData(oldp+6,(((IData)(4U) + vlSelf->test__DOT__in__DOT__pcwire)),32);
    }
    bufp->chgBit(oldp+7,(vlSelf->clk));
    bufp->chgBit(oldp+8,(vlSelf->rst));
    bufp->chgBit(oldp+9,(vlSelf->EQ));
    bufp->chgBit(oldp+10,(vlSelf->PCSrc_i));
    bufp->chgIData(oldp+11,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+12,(vlSelf->RegWrite));
    bufp->chgCData(oldp+13,(vlSelf->ALUctrl),3);
    bufp->chgBit(oldp+14,(vlSelf->ALUsrc));
    bufp->chgCData(oldp+15,(vlSelf->ImmSrc),3);
    bufp->chgBit(oldp+16,(vlSelf->PCSrc));
    bufp->chgBit(oldp+17,(vlSelf->MemWrite));
    bufp->chgBit(oldp+18,(vlSelf->ResultSrc));
    bufp->chgBit(oldp+19,(vlSelf->JumpSrc));
    bufp->chgBit(oldp+20,(vlSelf->JRetSrc));
    bufp->chgIData(oldp+21,((vlSelf->test__DOT__in__DOT__pcwire 
                             + vlSelf->ImmOp)),32);
    bufp->chgIData(oldp+22,(((IData)(vlSelf->PCSrc_i)
                              ? (vlSelf->test__DOT__in__DOT__pcwire 
                                 + vlSelf->ImmOp) : 
                             ((IData)(4U) + vlSelf->test__DOT__in__DOT__pcwire))),32);
}

void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_cleanup\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
