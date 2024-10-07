// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb.h"
#include "Vadder_tb__Syms.h"

//==========

VL_CTOR_IMP(Vadder_tb) {
    Vadder_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vadder_tb__Syms(this, name());
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadder_tb::__Vconfigure(Vadder_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vadder_tb::~Vadder_tb() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vadder_tb::_settle__TOP__1(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_settle__TOP__1\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffffeU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (IData)(vlTOPp->tb_param_adder__DOT__cin));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffffdU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (2U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffffbU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (4U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffff7U 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (8U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffffefU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x10U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffffdfU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x20U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffffbfU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x40U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffff7fU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x80U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffeffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x100U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffdffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x200U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffffbffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x400U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffff7ffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x800U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffefffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x1000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffdfffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x2000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffffbfffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x4000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffff7fffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x8000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffeffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x10000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffdffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x20000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfffbffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x40000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfff7ffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x80000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffefffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x100000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffdfffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x200000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xffbfffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x400000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xff7fffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x800000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfeffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x1000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfdffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x2000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xfbffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x4000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xf7ffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x8000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xefffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x10000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xdfffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x20000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0xbfffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x40000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__uut__DOT__c = ((0x7fffffffU 
                                                 & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                                | (0x80000000U 
                                                   & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                                                       | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                                          & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                                                      << 1U)));
    vlTOPp->tb_param_adder__DOT__sum = (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                                        ^ ((0xfffffffeU 
                                            & vlTOPp->tb_param_adder__DOT__uut__DOT__c) 
                                           | (IData)(vlTOPp->tb_param_adder__DOT__cin)));
}

void Vadder_tb::_initial__TOP__3(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_initial__TOP__3\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_WRITEF("Test Case 1: a = 00000005, b = 00000003, cin = 0, sum = %x, cout = %b\n",
              32,vlTOPp->tb_param_adder__DOT__sum,1,
              (1U & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                      | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                         & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                     >> 0x1fU)));
    VL_WRITEF("Test Case 2: a = 000000ff, b = 00000001, cin = 1, sum = %x, cout = %b\n",
              32,vlTOPp->tb_param_adder__DOT__sum,1,
              (1U & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                      | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                         & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                     >> 0x1fU)));
    VL_WRITEF("Test Case 3: a = ffffffff, b = 00000001, cin = 0, sum = %x, cout = %b\n",
              32,vlTOPp->tb_param_adder__DOT__sum,1,
              (1U & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                      | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                         & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                     >> 0x1fU)));
    VL_WRITEF("Test Case 4: a = 80000000, b = 7fffffff, cin = 0, sum = %x, cout = %b\n",
              32,vlTOPp->tb_param_adder__DOT__sum,1,
              (1U & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                      | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                         & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                     >> 0x1fU)));
    vlTOPp->tb_param_adder__DOT__a = 0x12345678U;
    vlTOPp->tb_param_adder__DOT__b = 0x87654321U;
    vlTOPp->tb_param_adder__DOT__cin = 1U;
    VL_WRITEF("Test Case 5: a = 12345678, b = 87654321, cin = 1, sum = %x, cout = %b\n",
              32,vlTOPp->tb_param_adder__DOT__sum,1,
              (1U & ((vlTOPp->tb_param_adder__DOT__uut__DOT__g 
                      | (vlTOPp->tb_param_adder__DOT__uut__DOT__p 
                         & vlTOPp->tb_param_adder__DOT__uut__DOT__c)) 
                     >> 0x1fU)));
    VL_STOP_MT("adder_tb.sv", 58, "");
    vlTOPp->tb_param_adder__DOT__uut__DOT__p = 0x95511559U;
    vlTOPp->tb_param_adder__DOT__uut__DOT__g = 0x2244220U;
}

void Vadder_tb::_settle__TOP__4(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_settle__TOP__4\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_param_adder__DOT__uut__DOT__p = (vlTOPp->tb_param_adder__DOT__a 
                                                ^ vlTOPp->tb_param_adder__DOT__b);
    vlTOPp->tb_param_adder__DOT__uut__DOT__g = (vlTOPp->tb_param_adder__DOT__a 
                                                & vlTOPp->tb_param_adder__DOT__b);
}

void Vadder_tb::_eval_initial(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_eval_initial\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void Vadder_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::final\n"); );
    // Variables
    Vadder_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder_tb::_eval_settle(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_eval_settle\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vadder_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_ctor_var_reset\n"); );
    // Body
    tb_param_adder__DOT__a = VL_RAND_RESET_I(32);
    tb_param_adder__DOT__b = VL_RAND_RESET_I(32);
    tb_param_adder__DOT__cin = VL_RAND_RESET_I(1);
    tb_param_adder__DOT__sum = VL_RAND_RESET_I(32);
    tb_param_adder__DOT__uut__DOT__p = VL_RAND_RESET_I(32);
    tb_param_adder__DOT__uut__DOT__g = VL_RAND_RESET_I(32);
    tb_param_adder__DOT__uut__DOT__c = VL_RAND_RESET_I(32);
    __Vchglast__TOP__tb_param_adder__DOT__uut__DOT__p = VL_RAND_RESET_I(32);
    __Vchglast__TOP__tb_param_adder__DOT__uut__DOT__g = VL_RAND_RESET_I(32);
    __Vchglast__TOP__tb_param_adder__DOT__uut__DOT__c = VL_RAND_RESET_I(32);
}
