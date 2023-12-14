// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtwo_way_set_associative_cache.h"
#include "Vtwo_way_set_associative_cache__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtwo_way_set_associative_cache::Vtwo_way_set_associative_cache(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtwo_way_set_associative_cache__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , write_enable{vlSymsp->TOP.write_enable}
    , cache_hit{vlSymsp->TOP.cache_hit}
    , address{vlSymsp->TOP.address}
    , data{vlSymsp->TOP.data}
    , cache_data{vlSymsp->TOP.cache_data}
    , write_back_data{vlSymsp->TOP.write_back_data}
    , write_back_address{vlSymsp->TOP.write_back_address}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtwo_way_set_associative_cache::Vtwo_way_set_associative_cache(const char* _vcname__)
    : Vtwo_way_set_associative_cache(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtwo_way_set_associative_cache::~Vtwo_way_set_associative_cache() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtwo_way_set_associative_cache___024root___eval_initial(Vtwo_way_set_associative_cache___024root* vlSelf);
void Vtwo_way_set_associative_cache___024root___eval_settle(Vtwo_way_set_associative_cache___024root* vlSelf);
void Vtwo_way_set_associative_cache___024root___eval(Vtwo_way_set_associative_cache___024root* vlSelf);
#ifdef VL_DEBUG
void Vtwo_way_set_associative_cache___024root___eval_debug_assertions(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG
void Vtwo_way_set_associative_cache___024root___final(Vtwo_way_set_associative_cache___024root* vlSelf);

static void _eval_initial_loop(Vtwo_way_set_associative_cache__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtwo_way_set_associative_cache___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtwo_way_set_associative_cache___024root___eval_settle(&(vlSymsp->TOP));
        Vtwo_way_set_associative_cache___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtwo_way_set_associative_cache::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtwo_way_set_associative_cache::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtwo_way_set_associative_cache___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtwo_way_set_associative_cache___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtwo_way_set_associative_cache::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtwo_way_set_associative_cache::final() {
    Vtwo_way_set_associative_cache___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtwo_way_set_associative_cache::hierName() const { return vlSymsp->name(); }
const char* Vtwo_way_set_associative_cache::modelName() const { return "Vtwo_way_set_associative_cache"; }
unsigned Vtwo_way_set_associative_cache::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtwo_way_set_associative_cache::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtwo_way_set_associative_cache___024root__trace_init_top(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtwo_way_set_associative_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_way_set_associative_cache___024root*>(voidSelf);
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtwo_way_set_associative_cache___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root__trace_register(Vtwo_way_set_associative_cache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtwo_way_set_associative_cache::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtwo_way_set_associative_cache___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
