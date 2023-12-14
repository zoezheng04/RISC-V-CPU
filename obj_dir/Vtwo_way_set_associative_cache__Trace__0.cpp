// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwo_way_set_associative_cache__Syms.h"


void Vtwo_way_set_associative_cache___024root__trace_chg_sub_0(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtwo_way_set_associative_cache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_chg_top_0\n"); );
    // Init
    Vtwo_way_set_associative_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_way_set_associative_cache___024root*>(voidSelf);
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtwo_way_set_associative_cache___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtwo_way_set_associative_cache___024root__trace_chg_sub_0(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->two_way_set_associative_cache__DOT__D_0[0]));
        bufp->chgBit(oldp+1,(vlSelf->two_way_set_associative_cache__DOT__D_0[1]));
        bufp->chgBit(oldp+2,(vlSelf->two_way_set_associative_cache__DOT__D_0[2]));
        bufp->chgBit(oldp+3,(vlSelf->two_way_set_associative_cache__DOT__D_0[3]));
        bufp->chgBit(oldp+4,(vlSelf->two_way_set_associative_cache__DOT__D_0[4]));
        bufp->chgBit(oldp+5,(vlSelf->two_way_set_associative_cache__DOT__D_0[5]));
        bufp->chgBit(oldp+6,(vlSelf->two_way_set_associative_cache__DOT__D_0[6]));
        bufp->chgBit(oldp+7,(vlSelf->two_way_set_associative_cache__DOT__D_0[7]));
        bufp->chgIData(oldp+8,(vlSelf->two_way_set_associative_cache__DOT__data_0[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->two_way_set_associative_cache__DOT__data_0[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->two_way_set_associative_cache__DOT__data_0[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->two_way_set_associative_cache__DOT__data_0[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->two_way_set_associative_cache__DOT__data_0[4]),32);
        bufp->chgIData(oldp+13,(vlSelf->two_way_set_associative_cache__DOT__data_0[5]),32);
        bufp->chgIData(oldp+14,(vlSelf->two_way_set_associative_cache__DOT__data_0[6]),32);
        bufp->chgIData(oldp+15,(vlSelf->two_way_set_associative_cache__DOT__data_0[7]),32);
        bufp->chgBit(oldp+16,(vlSelf->two_way_set_associative_cache__DOT__D_1[0]));
        bufp->chgBit(oldp+17,(vlSelf->two_way_set_associative_cache__DOT__D_1[1]));
        bufp->chgBit(oldp+18,(vlSelf->two_way_set_associative_cache__DOT__D_1[2]));
        bufp->chgBit(oldp+19,(vlSelf->two_way_set_associative_cache__DOT__D_1[3]));
        bufp->chgBit(oldp+20,(vlSelf->two_way_set_associative_cache__DOT__D_1[4]));
        bufp->chgBit(oldp+21,(vlSelf->two_way_set_associative_cache__DOT__D_1[5]));
        bufp->chgBit(oldp+22,(vlSelf->two_way_set_associative_cache__DOT__D_1[6]));
        bufp->chgBit(oldp+23,(vlSelf->two_way_set_associative_cache__DOT__D_1[7]));
        bufp->chgIData(oldp+24,(vlSelf->two_way_set_associative_cache__DOT__data_1[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->two_way_set_associative_cache__DOT__data_1[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->two_way_set_associative_cache__DOT__data_1[2]),32);
        bufp->chgIData(oldp+27,(vlSelf->two_way_set_associative_cache__DOT__data_1[3]),32);
        bufp->chgIData(oldp+28,(vlSelf->two_way_set_associative_cache__DOT__data_1[4]),32);
        bufp->chgIData(oldp+29,(vlSelf->two_way_set_associative_cache__DOT__data_1[5]),32);
        bufp->chgIData(oldp+30,(vlSelf->two_way_set_associative_cache__DOT__data_1[6]),32);
        bufp->chgIData(oldp+31,(vlSelf->two_way_set_associative_cache__DOT__data_1[7]),32);
        bufp->chgBit(oldp+32,(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+33,(vlSelf->two_way_set_associative_cache__DOT__V_0[0]));
        bufp->chgBit(oldp+34,(vlSelf->two_way_set_associative_cache__DOT__V_0[1]));
        bufp->chgBit(oldp+35,(vlSelf->two_way_set_associative_cache__DOT__V_0[2]));
        bufp->chgBit(oldp+36,(vlSelf->two_way_set_associative_cache__DOT__V_0[3]));
        bufp->chgBit(oldp+37,(vlSelf->two_way_set_associative_cache__DOT__V_0[4]));
        bufp->chgBit(oldp+38,(vlSelf->two_way_set_associative_cache__DOT__V_0[5]));
        bufp->chgBit(oldp+39,(vlSelf->two_way_set_associative_cache__DOT__V_0[6]));
        bufp->chgBit(oldp+40,(vlSelf->two_way_set_associative_cache__DOT__V_0[7]));
        bufp->chgIData(oldp+41,(vlSelf->two_way_set_associative_cache__DOT__tag_0[0]),27);
        bufp->chgIData(oldp+42,(vlSelf->two_way_set_associative_cache__DOT__tag_0[1]),27);
        bufp->chgIData(oldp+43,(vlSelf->two_way_set_associative_cache__DOT__tag_0[2]),27);
        bufp->chgIData(oldp+44,(vlSelf->two_way_set_associative_cache__DOT__tag_0[3]),27);
        bufp->chgIData(oldp+45,(vlSelf->two_way_set_associative_cache__DOT__tag_0[4]),27);
        bufp->chgIData(oldp+46,(vlSelf->two_way_set_associative_cache__DOT__tag_0[5]),27);
        bufp->chgIData(oldp+47,(vlSelf->two_way_set_associative_cache__DOT__tag_0[6]),27);
        bufp->chgIData(oldp+48,(vlSelf->two_way_set_associative_cache__DOT__tag_0[7]),27);
        bufp->chgBit(oldp+49,(vlSelf->two_way_set_associative_cache__DOT__V_1[0]));
        bufp->chgBit(oldp+50,(vlSelf->two_way_set_associative_cache__DOT__V_1[1]));
        bufp->chgBit(oldp+51,(vlSelf->two_way_set_associative_cache__DOT__V_1[2]));
        bufp->chgBit(oldp+52,(vlSelf->two_way_set_associative_cache__DOT__V_1[3]));
        bufp->chgBit(oldp+53,(vlSelf->two_way_set_associative_cache__DOT__V_1[4]));
        bufp->chgBit(oldp+54,(vlSelf->two_way_set_associative_cache__DOT__V_1[5]));
        bufp->chgBit(oldp+55,(vlSelf->two_way_set_associative_cache__DOT__V_1[6]));
        bufp->chgBit(oldp+56,(vlSelf->two_way_set_associative_cache__DOT__V_1[7]));
        bufp->chgIData(oldp+57,(vlSelf->two_way_set_associative_cache__DOT__tag_1[0]),27);
        bufp->chgIData(oldp+58,(vlSelf->two_way_set_associative_cache__DOT__tag_1[1]),27);
        bufp->chgIData(oldp+59,(vlSelf->two_way_set_associative_cache__DOT__tag_1[2]),27);
        bufp->chgIData(oldp+60,(vlSelf->two_way_set_associative_cache__DOT__tag_1[3]),27);
        bufp->chgIData(oldp+61,(vlSelf->two_way_set_associative_cache__DOT__tag_1[4]),27);
        bufp->chgIData(oldp+62,(vlSelf->two_way_set_associative_cache__DOT__tag_1[5]),27);
        bufp->chgIData(oldp+63,(vlSelf->two_way_set_associative_cache__DOT__tag_1[6]),27);
        bufp->chgIData(oldp+64,(vlSelf->two_way_set_associative_cache__DOT__tag_1[7]),27);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgBit(oldp+66,(vlSelf->write_enable));
    bufp->chgIData(oldp+67,(vlSelf->address),32);
    bufp->chgIData(oldp+68,(vlSelf->data),32);
    bufp->chgBit(oldp+69,(vlSelf->cache_hit));
    bufp->chgIData(oldp+70,(vlSelf->cache_data),32);
    bufp->chgIData(oldp+71,(vlSelf->write_back_data),32);
    bufp->chgIData(oldp+72,(vlSelf->write_back_address),32);
    bufp->chgBit(oldp+73,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[0]));
    bufp->chgBit(oldp+74,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[1]));
    bufp->chgBit(oldp+75,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[2]));
    bufp->chgBit(oldp+76,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[3]));
    bufp->chgBit(oldp+77,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[4]));
    bufp->chgBit(oldp+78,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[5]));
    bufp->chgBit(oldp+79,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[6]));
    bufp->chgBit(oldp+80,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[7]));
    bufp->chgBit(oldp+81,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[0]));
    bufp->chgBit(oldp+82,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[1]));
    bufp->chgBit(oldp+83,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[2]));
    bufp->chgBit(oldp+84,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[3]));
    bufp->chgBit(oldp+85,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[4]));
    bufp->chgBit(oldp+86,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[5]));
    bufp->chgBit(oldp+87,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[6]));
    bufp->chgBit(oldp+88,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[7]));
    bufp->chgCData(oldp+89,((7U & (vlSelf->address 
                                   >> 2U))),3);
    bufp->chgIData(oldp+90,((vlSelf->address >> 5U)),27);
    bufp->chgBit(oldp+91,(((vlSelf->two_way_set_associative_cache__DOT__tag_0
                            [(7U & (vlSelf->address 
                                    >> 2U))] == (vlSelf->address 
                                                 >> 5U)) 
                           & vlSelf->two_way_set_associative_cache__DOT__V_0
                           [(7U & (vlSelf->address 
                                   >> 2U))])));
}

void Vtwo_way_set_associative_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_cleanup\n"); );
    // Init
    Vtwo_way_set_associative_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_way_set_associative_cache___024root*>(voidSelf);
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
