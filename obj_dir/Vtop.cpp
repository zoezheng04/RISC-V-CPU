// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__WriteDataM_wire = vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__RD2E_wire = vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__RD2E_wire = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__RD1E_wire = vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__RD1E_wire = 0U;
    }
    vlTOPp->top__DOT__MemWriteM_wire = vlTOPp->top__DOT__MemWriteE_wire;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__ALUctrlE_wire = vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__ALUctrlE_wire = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__ALUsrcE_wire = vlTOPp->top__DOT__Decode_Stage__DOT__ALUSrc_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__ALUsrcE_wire = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__ExtImmE_wire = ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                                           ? (vlTOPp->top__DOT__PCPlus4D_wire 
                                              - (IData)(4U))
                                           : vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire);
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__ExtImmE_wire = 0U;
    }
    vlTOPp->top__DOT__ResultSrcW_wire = vlTOPp->top__DOT__ResultSrcM_wire;
    vlTOPp->top__DOT__ALUResultW_wire = vlTOPp->top__DOT__ALUResultM_wire;
    vlTOPp->top__DOT__ReadDataW_wire = ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                         [(0x1ffffU 
                                           & ((IData)(3U) 
                                              + vlTOPp->top__DOT__ALUResultM_wire))] 
                                         << 0x18U) 
                                        | ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                            [(0x1ffffU 
                                              & ((IData)(2U) 
                                                 + vlTOPp->top__DOT__ALUResultM_wire))] 
                                            << 0x10U) 
                                           | ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                               [(0x1ffffU 
                                                 & ((IData)(1U) 
                                                    + vlTOPp->top__DOT__ALUResultM_wire))] 
                                               << 8U) 
                                              | vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                              [(0x1ffffU 
                                                & vlTOPp->top__DOT__ALUResultM_wire)])));
    vlTOPp->top__DOT__RegWriteW_wire = vlTOPp->top__DOT__RegWriteM_wire;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__Rs1E_wire = (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0xfU));
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__Rs1E_wire = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__Rs2E_wire = (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0x14U));
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__Rs2E_wire = 0U;
    }
    vlTOPp->top__DOT__RdW_wire = vlTOPp->top__DOT__RdM_wire;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__MemWriteE_wire = vlTOPp->top__DOT__Decode_Stage__DOT__MemWrite_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__MemWriteE_wire = 0U;
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__StallD_wire)) 
               & (~ (IData)(vlTOPp->top__DOT__PCSrcD_wire))))) {
        vlTOPp->top__DOT__PCPlus4D_wire = ((IData)(4U) 
                                           + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire);
    }
    if (vlTOPp->top__DOT__PCSrcD_wire) {
        vlTOPp->top__DOT__PCPlus4D_wire = 0U;
    }
    vlTOPp->top__DOT__ResultSrcM_wire = vlTOPp->top__DOT__ResultSrcE_wire;
    vlTOPp->top__DOT__ResultW_wire = ((IData)(vlTOPp->top__DOT__ResultSrcW_wire)
                                       ? vlTOPp->top__DOT__ReadDataW_wire
                                       : vlTOPp->top__DOT__ALUResultW_wire);
    vlTOPp->top__DOT__ALUResultM_wire = vlTOPp->top__DOT__Execute_Stage__DOT__Result_wire;
    vlTOPp->top__DOT__RegWriteM_wire = vlTOPp->top__DOT__RegWriteE_wire;
    vlTOPp->top__DOT__RdM_wire = vlTOPp->top__DOT__RdE_wire;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__ResultSrcE_wire = vlTOPp->top__DOT__Decode_Stage__DOT__ResultSrc_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__ResultSrcE_wire = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__RegWriteE_wire = vlTOPp->top__DOT__Decode_Stage__DOT__RegWrite_wire;
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__RegWriteE_wire = 0U;
    }
    vlTOPp->top__DOT__ForwardAE_wire = 0U;
    if (((IData)(vlTOPp->top__DOT__RegWriteW_wire) 
         & ((IData)(vlTOPp->top__DOT__RdW_wire) == (IData)(vlTOPp->top__DOT__Rs1E_wire)))) {
        vlTOPp->top__DOT__ForwardAE_wire = 1U;
    }
    if (((IData)(vlTOPp->top__DOT__RegWriteM_wire) 
         & ((IData)(vlTOPp->top__DOT__RdM_wire) == (IData)(vlTOPp->top__DOT__Rs1E_wire)))) {
        vlTOPp->top__DOT__ForwardAE_wire = 2U;
    }
    vlTOPp->top__DOT__ForwardBE_wire = 0U;
    if (((IData)(vlTOPp->top__DOT__RegWriteW_wire) 
         & ((IData)(vlTOPp->top__DOT__RdW_wire) == (IData)(vlTOPp->top__DOT__Rs2E_wire)))) {
        vlTOPp->top__DOT__ForwardBE_wire = 1U;
    }
    if (((IData)(vlTOPp->top__DOT__RegWriteM_wire) 
         & ((IData)(vlTOPp->top__DOT__RdM_wire) == (IData)(vlTOPp->top__DOT__Rs2E_wire)))) {
        vlTOPp->top__DOT__ForwardBE_wire = 2U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__FlushE_wire)))) {
        vlTOPp->top__DOT__RdE_wire = (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                               >> 7U));
    }
    if (vlTOPp->top__DOT__FlushE_wire) {
        vlTOPp->top__DOT__RdE_wire = 0U;
    }
    vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
        = ((0U == (IData)(vlTOPp->top__DOT__ForwardAE_wire))
            ? vlTOPp->top__DOT__RD1E_wire : ((1U == (IData)(vlTOPp->top__DOT__ForwardAE_wire))
                                              ? vlTOPp->top__DOT__ResultW_wire
                                              : ((2U 
                                                  == (IData)(vlTOPp->top__DOT__ForwardAE_wire))
                                                  ? vlTOPp->top__DOT__ALUResultM_wire
                                                  : vlTOPp->top__DOT__RD1E_wire)));
    vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire 
        = ((0U == (IData)(vlTOPp->top__DOT__ForwardBE_wire))
            ? vlTOPp->top__DOT__RD2E_wire : ((1U == (IData)(vlTOPp->top__DOT__ForwardBE_wire))
                                              ? vlTOPp->top__DOT__ResultW_wire
                                              : ((2U 
                                                  == (IData)(vlTOPp->top__DOT__ForwardBE_wire))
                                                  ? vlTOPp->top__DOT__ALUResultM_wire
                                                  : vlTOPp->top__DOT__RD2E_wire)));
    vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire 
        = ((IData)(vlTOPp->top__DOT__ALUsrcE_wire) ? vlTOPp->top__DOT__ExtImmE_wire
            : vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire);
    vlTOPp->top__DOT__Execute_Stage__DOT__Result_wire 
        = ((8U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
            ? ((4U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                ? ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? 0U : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                             ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                                ^ vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                             : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                                & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)))
                : ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           | vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           ^ vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                    : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           >> (0x1fU & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           - vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))))
            : ((4U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                ? ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           << (0x1fU & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                    : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (0xffU & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (0xfffff000U & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)))
                : ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                    : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           != vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)))));
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__StallD_wire)) 
               & (~ (IData)(vlTOPp->top__DOT__PCSrcD_wire))))) {
        vlTOPp->top__DOT__InstrD_wire = ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                          [(0xfffU 
                                            & ((IData)(3U) 
                                               + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                          << 0x18U) 
                                         | ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                             << 0x10U) 
                                            | ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(1U) 
                                                     + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                                << 8U) 
                                               | vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                               [(0xfffU 
                                                 & vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire)])));
    }
    if (vlTOPp->top__DOT__PCSrcD_wire) {
        vlTOPp->top__DOT__InstrD_wire = 0U;
    }
    vlTOPp->top__DOT__HazardUnit__DOT__lwstall = ((IData)(vlTOPp->top__DOT__RegWriteE_wire) 
                                                  & (IData)(vlTOPp->top__DOT__ResultSrcE_wire));
    vlTOPp->top__DOT__StallD_wire = vlTOPp->top__DOT__HazardUnit__DOT__lwstall;
    vlTOPp->top__DOT__StallF_wire = vlTOPp->top__DOT__HazardUnit__DOT__lwstall;
    vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O 
        = (0x7fU & vlTOPp->top__DOT__InstrD_wire);
    vlTOPp->top__DOT__Decode_Stage__DOT__RegWrite_wire 
        = (((((((0x33U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
                | (3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
               | (0x13U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
              | (0x67U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
             | (0x6fU == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
            | (0x17U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
           | (0x37U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    vlTOPp->top__DOT__Decode_Stage__DOT__ALUSrc_wire 
        = ((((((3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
               | (0x13U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
              | (0x67U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
             | (0x6fU == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
            | (0x23U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
           | (0x37U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    vlTOPp->top__DOT__Decode_Stage__DOT__MemWrite_wire 
        = (0x23U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__ResultSrc_wire 
        = (3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire 
        = (0x6fU == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire 
        = (0x67U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire = 
        ((0x63U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
         & (0U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                         >> 0xcU))));
    vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire = 
        ((0x63U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
         & (1U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                         >> 0xcU))));
    if ((0x40U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            } else {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 2U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 3U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((0U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0xcU)))) {
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 3U;
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xdU;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->top__DOT__InstrD_wire 
                                                   >> 0xcU)))) {
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 3U;
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 4U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((0x4000U & vlTOPp->top__DOT__InstrD_wire)) {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xcU;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xbU;
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 9U;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xaU;
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 7U;
                                        } else {
                                            if ((0x40000000U 
                                                 & vlTOPp->top__DOT__InstrD_wire)) {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 8U;
                                            } else {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 2U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 6U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 1U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((0x4000U & vlTOPp->top__DOT__InstrD_wire)) {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xcU;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xbU;
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 9U;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xaU;
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 7U;
                                        } else {
                                            if ((0x40000000U 
                                                 & vlTOPp->top__DOT__InstrD_wire)) {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 8U;
                                            } else {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((4U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0xcU)))) {
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 5U;
                                } else {
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire)))) {
                vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                    = ((0xfff00000U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                       ((0xff000U & vlTOPp->top__DOT__InstrD_wire) 
                        | ((0x800U & (vlTOPp->top__DOT__InstrD_wire 
                                      >> 9U)) | (0x7feU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 0x14U)))));
            }
        }
    } else {
        vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
            = ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                ? ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlTOPp->top__DOT__InstrD_wire 
                                   << 4U)) | ((0x7e0U 
                                               & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 7U)))))
                    : ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       ((0x7e0U & (vlTOPp->top__DOT__InstrD_wire 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 7U)))))
                : ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                    ? (0xfffff000U & vlTOPp->top__DOT__InstrD_wire)
                    : ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       (0x7ffU & (vlTOPp->top__DOT__InstrD_wire 
                                  >> 0x14U)))));
    }
    vlTOPp->top__DOT__BranchD_wire = ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire) 
                                      | (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire));
    vlTOPp->top__DOT__HazardUnit__DOT__BranchStall = 0U;
    if ((((IData)(vlTOPp->top__DOT__BranchD_wire) & (IData)(vlTOPp->top__DOT__RegWriteE_wire)) 
         & (((IData)(vlTOPp->top__DOT__RdE_wire) == 
             (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                       >> 0xfU))) | ((IData)(vlTOPp->top__DOT__RdE_wire) 
                                     == (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0x14U)))))) {
        vlTOPp->top__DOT__HazardUnit__DOT__BranchStall = 1U;
    }
    if ((((IData)(vlTOPp->top__DOT__BranchD_wire) & (IData)(vlTOPp->top__DOT__ResultSrcM_wire)) 
         & (((IData)(vlTOPp->top__DOT__RdM_wire) == 
             (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                       >> 0xfU))) | ((IData)(vlTOPp->top__DOT__RdM_wire) 
                                     == (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0x14U)))))) {
        vlTOPp->top__DOT__HazardUnit__DOT__BranchStall = 1U;
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v3;
    // Body
    __Vdlyvset__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0 = 0U;
    __Vdlyvset__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__StallF_wire)))) {
        vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->top__DOT__Fetch_Stage__DOT__PCNext_wire);
    }
    if (vlTOPp->top__DOT__MemWriteM_wire) {
        __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0 
            = (0xffU & vlTOPp->top__DOT__WriteDataM_wire);
        __Vdlyvset__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0 
            = (0x1ffffU & vlTOPp->top__DOT__ALUResultM_wire);
        __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v1 
            = (0xffU & (vlTOPp->top__DOT__WriteDataM_wire 
                        >> 8U));
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlTOPp->top__DOT__ALUResultM_wire));
        __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v2 
            = (0xffU & (vlTOPp->top__DOT__WriteDataM_wire 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlTOPp->top__DOT__ALUResultM_wire));
        __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v3 
            = (0xffU & (vlTOPp->top__DOT__WriteDataM_wire 
                        >> 0x18U));
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlTOPp->top__DOT__ALUResultM_wire));
    }
    if (vlTOPp->top__DOT__RegWriteW_wire) {
        __Vdlyvval__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0 
            = vlTOPp->top__DOT__ResultW_wire;
        __Vdlyvset__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0 = 1U;
        __Vdlyvdim0__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0 
            = vlTOPp->top__DOT__RdW_wire;
    }
    if (__Vdlyvset__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0) {
        vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v0;
        vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v1] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v1;
        vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v2] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v2;
        vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v3] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array__v3;
    }
    if (__Vdlyvset__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0) {
        vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[__Vdlyvdim0__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0] 
            = __Vdlyvval__top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers__v0;
    }
    vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0U] = 0U;
    vlTOPp->a0 = vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [0xaU];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire 
        = vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlTOPp->top__DOT__InstrD_wire >> 0x14U))];
    vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire 
        = vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlTOPp->top__DOT__InstrD_wire >> 0xfU))];
    vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX 
        = ((((0U != (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                              >> 0x14U))) & ((0x1fU 
                                              & (vlTOPp->top__DOT__InstrD_wire 
                                                 >> 0x14U)) 
                                             == (IData)(vlTOPp->top__DOT__RdM_wire))) 
            & (IData)(vlTOPp->top__DOT__RegWriteM_wire))
            ? vlTOPp->top__DOT__ALUResultM_wire : vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire);
    vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
        = ((((0U != (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                              >> 0xfU))) & ((0x1fU 
                                             & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0xfU)) 
                                            == (IData)(vlTOPp->top__DOT__RdM_wire))) 
            & (IData)(vlTOPp->top__DOT__RegWriteM_wire))
            ? vlTOPp->top__DOT__ALUResultM_wire : vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire);
    vlTOPp->top__DOT__PCSrcD_wire = ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire)
                                      ? (vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                         != vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                      : ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                          ? (vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                             == vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                          : ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                             | (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire))));
    vlTOPp->top__DOT__Fetch_Stage__DOT__PCNext_wire 
        = ((IData)(vlTOPp->top__DOT__PCSrcD_wire) ? 
           ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
             ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
             : (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                + (vlTOPp->top__DOT__PCPlus4D_wire 
                   - (IData)(8U)))) : ((IData)(4U) 
                                       + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
