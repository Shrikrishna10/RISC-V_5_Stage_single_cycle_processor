// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VREGIS32_TB_H_
#define _VREGIS32_TB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vregis32_tb__Syms;

//----------

VL_MODULE(Vregis32_tb) {
  public:
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ regis32_tb__DOT__clk;
    CData/*0:0*/ regis32_tb__DOT__rst;
    IData/*31:0*/ regis32_tb__DOT__din;
    IData/*31:0*/ regis32_tb__DOT__q;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__regis32_tb__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP__regis32_tb__DOT__rst;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vregis32_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vregis32_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vregis32_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vregis32_tb();
    
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
    static void _eval_initial_loop(Vregis32_tb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vregis32_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vregis32_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vregis32_tb__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vregis32_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vregis32_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vregis32_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vregis32_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vregis32_tb__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
