// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwo_way_set_associative_cache__Syms.h"


VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_init_sub__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"write_enable", false,-1);
    tracep->declBus(c+83,"address", false,-1, 31,0);
    tracep->declBus(c+84,"data", false,-1, 31,0);
    tracep->declBit(c+85,"cache_hit", false,-1);
    tracep->declBus(c+86,"cache_data", false,-1, 31,0);
    tracep->declBus(c+87,"write_back_data", false,-1, 31,0);
    tracep->declBus(c+88,"write_back_address", false,-1, 31,0);
    tracep->pushNamePrefix("two_way_set_associative_cache ");
    tracep->declBus(c+93,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+96,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"CACHE_LENGTH", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"write_enable", false,-1);
    tracep->declBus(c+83,"address", false,-1, 31,0);
    tracep->declBus(c+84,"data", false,-1, 31,0);
    tracep->declBit(c+85,"cache_hit", false,-1);
    tracep->declBus(c+86,"cache_data", false,-1, 31,0);
    tracep->declBus(c+87,"write_back_data", false,-1, 31,0);
    tracep->declBus(c+88,"write_back_address", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+33+i*1,"lru_counter_0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+41+i*1,"lru_counter_1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1+i*1,"V_0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+49+i*1,"D_0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,"tag_0", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+57+i*1,"data_0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+17+i*1,"V_1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+65+i*1,"D_1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+25+i*1,"tag_1", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+73+i*1,"data_1", true,(i+0), 31,0);
    }
    tracep->declBus(c+89,"data_set", false,-1, 2,0);
    tracep->declBus(c+90,"data_tag", false,-1, 26,0);
    tracep->declBit(c+91,"cache_hit_0", false,-1);
    tracep->declBit(c+92,"cache_hit_1", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_init_top(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_init_top\n"); );
    // Body
    Vtwo_way_set_associative_cache___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtwo_way_set_associative_cache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtwo_way_set_associative_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_register(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtwo_way_set_associative_cache___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtwo_way_set_associative_cache___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtwo_way_set_associative_cache___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_full_sub_0(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_full_top_0\n"); );
    // Init
    Vtwo_way_set_associative_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_way_set_associative_cache___024root*>(voidSelf);
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtwo_way_set_associative_cache___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_full_sub_0(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->two_way_set_associative_cache__DOT__V_0[0]));
    bufp->fullBit(oldp+2,(vlSelf->two_way_set_associative_cache__DOT__V_0[1]));
    bufp->fullBit(oldp+3,(vlSelf->two_way_set_associative_cache__DOT__V_0[2]));
    bufp->fullBit(oldp+4,(vlSelf->two_way_set_associative_cache__DOT__V_0[3]));
    bufp->fullBit(oldp+5,(vlSelf->two_way_set_associative_cache__DOT__V_0[4]));
    bufp->fullBit(oldp+6,(vlSelf->two_way_set_associative_cache__DOT__V_0[5]));
    bufp->fullBit(oldp+7,(vlSelf->two_way_set_associative_cache__DOT__V_0[6]));
    bufp->fullBit(oldp+8,(vlSelf->two_way_set_associative_cache__DOT__V_0[7]));
    bufp->fullIData(oldp+9,(vlSelf->two_way_set_associative_cache__DOT__tag_0[0]),27);
    bufp->fullIData(oldp+10,(vlSelf->two_way_set_associative_cache__DOT__tag_0[1]),27);
    bufp->fullIData(oldp+11,(vlSelf->two_way_set_associative_cache__DOT__tag_0[2]),27);
    bufp->fullIData(oldp+12,(vlSelf->two_way_set_associative_cache__DOT__tag_0[3]),27);
    bufp->fullIData(oldp+13,(vlSelf->two_way_set_associative_cache__DOT__tag_0[4]),27);
    bufp->fullIData(oldp+14,(vlSelf->two_way_set_associative_cache__DOT__tag_0[5]),27);
    bufp->fullIData(oldp+15,(vlSelf->two_way_set_associative_cache__DOT__tag_0[6]),27);
    bufp->fullIData(oldp+16,(vlSelf->two_way_set_associative_cache__DOT__tag_0[7]),27);
    bufp->fullBit(oldp+17,(vlSelf->two_way_set_associative_cache__DOT__V_1[0]));
    bufp->fullBit(oldp+18,(vlSelf->two_way_set_associative_cache__DOT__V_1[1]));
    bufp->fullBit(oldp+19,(vlSelf->two_way_set_associative_cache__DOT__V_1[2]));
    bufp->fullBit(oldp+20,(vlSelf->two_way_set_associative_cache__DOT__V_1[3]));
    bufp->fullBit(oldp+21,(vlSelf->two_way_set_associative_cache__DOT__V_1[4]));
    bufp->fullBit(oldp+22,(vlSelf->two_way_set_associative_cache__DOT__V_1[5]));
    bufp->fullBit(oldp+23,(vlSelf->two_way_set_associative_cache__DOT__V_1[6]));
    bufp->fullBit(oldp+24,(vlSelf->two_way_set_associative_cache__DOT__V_1[7]));
    bufp->fullIData(oldp+25,(vlSelf->two_way_set_associative_cache__DOT__tag_1[0]),27);
    bufp->fullIData(oldp+26,(vlSelf->two_way_set_associative_cache__DOT__tag_1[1]),27);
    bufp->fullIData(oldp+27,(vlSelf->two_way_set_associative_cache__DOT__tag_1[2]),27);
    bufp->fullIData(oldp+28,(vlSelf->two_way_set_associative_cache__DOT__tag_1[3]),27);
    bufp->fullIData(oldp+29,(vlSelf->two_way_set_associative_cache__DOT__tag_1[4]),27);
    bufp->fullIData(oldp+30,(vlSelf->two_way_set_associative_cache__DOT__tag_1[5]),27);
    bufp->fullIData(oldp+31,(vlSelf->two_way_set_associative_cache__DOT__tag_1[6]),27);
    bufp->fullIData(oldp+32,(vlSelf->two_way_set_associative_cache__DOT__tag_1[7]),27);
    bufp->fullBit(oldp+33,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[0]));
    bufp->fullBit(oldp+34,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[1]));
    bufp->fullBit(oldp+35,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[2]));
    bufp->fullBit(oldp+36,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[3]));
    bufp->fullBit(oldp+37,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[4]));
    bufp->fullBit(oldp+38,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[5]));
    bufp->fullBit(oldp+39,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[6]));
    bufp->fullBit(oldp+40,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[7]));
    bufp->fullBit(oldp+41,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[0]));
    bufp->fullBit(oldp+42,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[1]));
    bufp->fullBit(oldp+43,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[2]));
    bufp->fullBit(oldp+44,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[3]));
    bufp->fullBit(oldp+45,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[4]));
    bufp->fullBit(oldp+46,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[5]));
    bufp->fullBit(oldp+47,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[6]));
    bufp->fullBit(oldp+48,(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[7]));
    bufp->fullBit(oldp+49,(vlSelf->two_way_set_associative_cache__DOT__D_0[0]));
    bufp->fullBit(oldp+50,(vlSelf->two_way_set_associative_cache__DOT__D_0[1]));
    bufp->fullBit(oldp+51,(vlSelf->two_way_set_associative_cache__DOT__D_0[2]));
    bufp->fullBit(oldp+52,(vlSelf->two_way_set_associative_cache__DOT__D_0[3]));
    bufp->fullBit(oldp+53,(vlSelf->two_way_set_associative_cache__DOT__D_0[4]));
    bufp->fullBit(oldp+54,(vlSelf->two_way_set_associative_cache__DOT__D_0[5]));
    bufp->fullBit(oldp+55,(vlSelf->two_way_set_associative_cache__DOT__D_0[6]));
    bufp->fullBit(oldp+56,(vlSelf->two_way_set_associative_cache__DOT__D_0[7]));
    bufp->fullIData(oldp+57,(vlSelf->two_way_set_associative_cache__DOT__data_0[0]),32);
    bufp->fullIData(oldp+58,(vlSelf->two_way_set_associative_cache__DOT__data_0[1]),32);
    bufp->fullIData(oldp+59,(vlSelf->two_way_set_associative_cache__DOT__data_0[2]),32);
    bufp->fullIData(oldp+60,(vlSelf->two_way_set_associative_cache__DOT__data_0[3]),32);
    bufp->fullIData(oldp+61,(vlSelf->two_way_set_associative_cache__DOT__data_0[4]),32);
    bufp->fullIData(oldp+62,(vlSelf->two_way_set_associative_cache__DOT__data_0[5]),32);
    bufp->fullIData(oldp+63,(vlSelf->two_way_set_associative_cache__DOT__data_0[6]),32);
    bufp->fullIData(oldp+64,(vlSelf->two_way_set_associative_cache__DOT__data_0[7]),32);
    bufp->fullBit(oldp+65,(vlSelf->two_way_set_associative_cache__DOT__D_1[0]));
    bufp->fullBit(oldp+66,(vlSelf->two_way_set_associative_cache__DOT__D_1[1]));
    bufp->fullBit(oldp+67,(vlSelf->two_way_set_associative_cache__DOT__D_1[2]));
    bufp->fullBit(oldp+68,(vlSelf->two_way_set_associative_cache__DOT__D_1[3]));
    bufp->fullBit(oldp+69,(vlSelf->two_way_set_associative_cache__DOT__D_1[4]));
    bufp->fullBit(oldp+70,(vlSelf->two_way_set_associative_cache__DOT__D_1[5]));
    bufp->fullBit(oldp+71,(vlSelf->two_way_set_associative_cache__DOT__D_1[6]));
    bufp->fullBit(oldp+72,(vlSelf->two_way_set_associative_cache__DOT__D_1[7]));
    bufp->fullIData(oldp+73,(vlSelf->two_way_set_associative_cache__DOT__data_1[0]),32);
    bufp->fullIData(oldp+74,(vlSelf->two_way_set_associative_cache__DOT__data_1[1]),32);
    bufp->fullIData(oldp+75,(vlSelf->two_way_set_associative_cache__DOT__data_1[2]),32);
    bufp->fullIData(oldp+76,(vlSelf->two_way_set_associative_cache__DOT__data_1[3]),32);
    bufp->fullIData(oldp+77,(vlSelf->two_way_set_associative_cache__DOT__data_1[4]),32);
    bufp->fullIData(oldp+78,(vlSelf->two_way_set_associative_cache__DOT__data_1[5]),32);
    bufp->fullIData(oldp+79,(vlSelf->two_way_set_associative_cache__DOT__data_1[6]),32);
    bufp->fullIData(oldp+80,(vlSelf->two_way_set_associative_cache__DOT__data_1[7]),32);
    bufp->fullBit(oldp+81,(vlSelf->clk));
    bufp->fullBit(oldp+82,(vlSelf->write_enable));
    bufp->fullIData(oldp+83,(vlSelf->address),32);
    bufp->fullIData(oldp+84,(vlSelf->data),32);
    bufp->fullBit(oldp+85,(vlSelf->cache_hit));
    bufp->fullIData(oldp+86,(vlSelf->cache_data),32);
    bufp->fullIData(oldp+87,(vlSelf->write_back_data),32);
    bufp->fullIData(oldp+88,(vlSelf->write_back_address),32);
    bufp->fullCData(oldp+89,((7U & (vlSelf->address 
                                    >> 2U))),3);
    bufp->fullIData(oldp+90,((vlSelf->address >> 5U)),27);
    bufp->fullBit(oldp+91,(((vlSelf->two_way_set_associative_cache__DOT__tag_0
                             [(7U & (vlSelf->address 
                                     >> 2U))] == (vlSelf->address 
                                                  >> 5U)) 
                            & vlSelf->two_way_set_associative_cache__DOT__V_0
                            [(7U & (vlSelf->address 
                                    >> 2U))])));
    bufp->fullBit(oldp+92,(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1));
    bufp->fullIData(oldp+93,(0x20U),32);
    bufp->fullIData(oldp+94,(0x1bU),32);
    bufp->fullIData(oldp+95,(3U),32);
    bufp->fullIData(oldp+96,(2U),32);
    bufp->fullIData(oldp+97,(8U),32);
}
