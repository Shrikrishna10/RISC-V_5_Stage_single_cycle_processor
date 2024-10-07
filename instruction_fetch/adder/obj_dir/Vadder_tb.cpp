// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb.h"
#include "Vadder_tb__Syms.h"

//==========

void Vadder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadder_tb::eval\n"); );
    Vadder_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder_tb.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vadder_tb::_eval_initial_loop(Vadder_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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
            VL_FATAL_MT("adder_tb.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vadder_tb::_combo__TOP__2(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_combo__TOP__2\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vadder_tb::_eval(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_eval\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vadder_tb::_change_request(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_change_request\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vadder_tb::_change_request_1(Vadder_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_change_request_1\n"); );
    Vadder_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->tb_param_adder__DOT__uut__DOT__p ^ vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__p)
         | (vlTOPp->tb_param_adder__DOT__uut__DOT__g ^ vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__g)
         | (vlTOPp->tb_param_adder__DOT__uut__DOT__c ^ vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_param_adder__DOT__uut__DOT__p ^ vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__p))) VL_DBG_MSGF("        CHANGE: adder.sv:8: tb_param_adder.uut.p\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_param_adder__DOT__uut__DOT__g ^ vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__g))) VL_DBG_MSGF("        CHANGE: adder.sv:8: tb_param_adder.uut.g\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->tb_param_adder__DOT__uut__DOT__c ^ vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__c))) VL_DBG_MSGF("        CHANGE: adder.sv:8: tb_param_adder.uut.c\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__p 
        = vlTOPp->tb_param_adder__DOT__uut__DOT__p;
    vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__g 
        = vlTOPp->tb_param_adder__DOT__uut__DOT__g;
    vlTOPp->__Vchglast__TOP__tb_param_adder__DOT__uut__DOT__c 
        = vlTOPp->tb_param_adder__DOT__uut__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void Vadder_tb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
