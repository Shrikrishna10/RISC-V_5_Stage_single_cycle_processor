// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VADDER_TB_H_
#define _VADDER_TB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vadder_tb__Syms;

//----------

VL_MODULE(Vadder_tb) {
  public:
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ tb_param_adder__DOT__cin;
    IData/*31:0*/ tb_param_adder__DOT__a;
    IData/*31:0*/ tb_param_adder__DOT__b;
    IData/*31:0*/ tb_param_adder__DOT__sum;
    IData/*31:0*/ tb_param_adder__DOT__uut__DOT__p;
    IData/*31:0*/ tb_param_adder__DOT__uut__DOT__g;
    IData/*31:0*/ tb_param_adder__DOT__uut__DOT__c;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    IData/*31:0*/ __Vchglast__TOP__tb_param_adder__DOT__uut__DOT__p;
    IData/*31:0*/ __Vchglast__TOP__tb_param_adder__DOT__uut__DOT__g;
    IData/*31:0*/ __Vchglast__TOP__tb_param_adder__DOT__uut__DOT__c;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vadder_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadder_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vadder_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vadder_tb();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vadder_tb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vadder_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vadder_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vadder_tb__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vadder_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vadder_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vadder_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vadder_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vadder_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(Vadder_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(Vadder_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
