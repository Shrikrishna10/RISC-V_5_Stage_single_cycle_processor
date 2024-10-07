// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregis32_tb.h for the primary calling header

#include "Vregis32_tb.h"
#include "Vregis32_tb__Syms.h"

//==========

VL_CTOR_IMP(Vregis32_tb) {
    Vregis32_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vregis32_tb__Syms(this, name());
    Vregis32_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vregis32_tb::__Vconfigure(Vregis32_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vregis32_tb::~Vregis32_tb() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vregis32_tb::_initial__TOP__1(Vregis32_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregis32_tb::_initial__TOP__1\n"); );
    Vregis32_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->regis32_tb__DOT__clk = 0U;
    while (1U) {
        vlTOPp->regis32_tb__DOT__clk = (1U & (~ (IData)(vlTOPp->regis32_tb__DOT__clk)));
    }
    vlTOPp->regis32_tb__DOT__rst = 0U;
    VL_WRITEF("Time: %0t | q = %x\n",64,VL_TIME_UNITED_Q(1),
              32,vlTOPp->regis32_tb__DOT__q);
    VL_WRITEF("Time: %0t | q = %x\n",64,VL_TIME_UNITED_Q(1),
              32,vlTOPp->regis32_tb__DOT__q);
    vlTOPp->regis32_tb__DOT__din = 0xaabbccddU;
    VL_WRITEF("Time: %0t | q = %x\n",64,VL_TIME_UNITED_Q(1),
              32,vlTOPp->regis32_tb__DOT__q);
    VL_STOP_MT("regis32_tb.sv", 43, "");
}

void Vregis32_tb::_eval_initial(Vregis32_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregis32_tb::_eval_initial\n"); );
    Vregis32_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__regis32_tb__DOT__clk = vlTOPp->regis32_tb__DOT__clk;
    vlTOPp->__Vclklast__TOP__regis32_tb__DOT__rst = 0U;
}

void Vregis32_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregis32_tb::final\n"); );
    // Variables
    Vregis32_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vregis32_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vregis32_tb::_eval_settle(Vregis32_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregis32_tb::_eval_settle\n"); );
    Vregis32_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vregis32_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregis32_tb::_ctor_var_reset\n"); );
    // Body
    regis32_tb__DOT__clk = VL_RAND_RESET_I(1);
    regis32_tb__DOT__rst = VL_RAND_RESET_I(1);
    regis32_tb__DOT__din = VL_RAND_RESET_I(32);
    regis32_tb__DOT__q = VL_RAND_RESET_I(32);
}
