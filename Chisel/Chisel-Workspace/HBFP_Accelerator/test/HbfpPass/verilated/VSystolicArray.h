// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSYSTOLICARRAY_H_
#define _VSYSTOLICARRAY_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VSystolicArray__Syms;
class VSystolicArray_VerilatedVcd;


//----------

VL_MODULE(VSystolicArray) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_in_ready,0,0);
    VL_IN8(io_in_valid,0,0);
    VL_IN8(io_in_bits_0_0_hor_sign,0,0);
    VL_IN8(io_in_bits_0_0_hor_man,3,0);
    VL_IN8(io_in_bits_0_0_hor_exp,7,0);
    VL_IN8(io_in_bits_0_0_ver_sign,0,0);
    VL_IN8(io_in_bits_0_0_ver_man,3,0);
    VL_IN8(io_in_bits_0_0_ver_exp,7,0);
    VL_IN8(io_in_bits_0_1_hor_sign,0,0);
    VL_IN8(io_in_bits_0_1_hor_man,3,0);
    VL_IN8(io_in_bits_0_1_hor_exp,7,0);
    VL_IN8(io_in_bits_0_1_ver_sign,0,0);
    VL_IN8(io_in_bits_0_1_ver_man,3,0);
    VL_IN8(io_in_bits_0_1_ver_exp,7,0);
    VL_IN8(io_in_bits_1_0_hor_sign,0,0);
    VL_IN8(io_in_bits_1_0_hor_man,3,0);
    VL_IN8(io_in_bits_1_0_hor_exp,7,0);
    VL_IN8(io_in_bits_1_0_ver_sign,0,0);
    VL_IN8(io_in_bits_1_0_ver_man,3,0);
    VL_IN8(io_in_bits_1_0_ver_exp,7,0);
    VL_IN8(io_in_bits_1_1_hor_sign,0,0);
    VL_IN8(io_in_bits_1_1_hor_man,3,0);
    VL_IN8(io_in_bits_1_1_hor_exp,7,0);
    VL_IN8(io_in_bits_1_1_ver_sign,0,0);
    VL_IN8(io_in_bits_1_1_ver_man,3,0);
    VL_IN8(io_in_bits_1_1_ver_exp,7,0);
    VL_OUT8(io_out_0_0_hor_sign,0,0);
    VL_OUT8(io_out_0_0_hor_man,3,0);
    VL_OUT8(io_out_0_0_hor_exp,7,0);
    VL_OUT8(io_out_0_0_ver_sign,0,0);
    VL_OUT8(io_out_0_0_ver_man,3,0);
    VL_OUT8(io_out_0_0_ver_exp,7,0);
    VL_OUT8(io_out_0_0_result_sign,0,0);
    VL_OUT8(io_out_0_0_result_man,3,0);
    VL_OUT8(io_out_0_0_result_exp,7,0);
    VL_OUT8(io_out_0_1_hor_sign,0,0);
    VL_OUT8(io_out_0_1_hor_man,3,0);
    VL_OUT8(io_out_0_1_hor_exp,7,0);
    VL_OUT8(io_out_0_1_ver_sign,0,0);
    VL_OUT8(io_out_0_1_ver_man,3,0);
    VL_OUT8(io_out_0_1_ver_exp,7,0);
    VL_OUT8(io_out_0_1_result_sign,0,0);
    VL_OUT8(io_out_0_1_result_man,3,0);
    VL_OUT8(io_out_0_1_result_exp,7,0);
    VL_OUT8(io_out_1_0_hor_sign,0,0);
    VL_OUT8(io_out_1_0_hor_man,3,0);
    VL_OUT8(io_out_1_0_hor_exp,7,0);
    VL_OUT8(io_out_1_0_ver_sign,0,0);
    VL_OUT8(io_out_1_0_ver_man,3,0);
    VL_OUT8(io_out_1_0_ver_exp,7,0);
    VL_OUT8(io_out_1_0_result_sign,0,0);
    VL_OUT8(io_out_1_0_result_man,3,0);
    VL_OUT8(io_out_1_0_result_exp,7,0);
    VL_OUT8(io_out_1_1_hor_sign,0,0);
    VL_OUT8(io_out_1_1_hor_man,3,0);
    VL_OUT8(io_out_1_1_hor_exp,7,0);
    VL_OUT8(io_out_1_1_ver_sign,0,0);
    VL_OUT8(io_out_1_1_ver_man,3,0);
    VL_OUT8(io_out_1_1_ver_exp,7,0);
    VL_OUT8(io_out_1_1_result_sign,0,0);
    VL_OUT8(io_out_1_1_result_man,3,0);
    VL_OUT8(io_out_1_1_result_exp,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SystolicArray__DOT__pes_0_0_io_in_hor_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_0_io_in_hor_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0_io_in_hor_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_0_io_in_ver_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_0_io_in_ver_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0_io_in_ver_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_1_io_in_ver_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_1_io_in_ver_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1_io_in_ver_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_0_io_in_hor_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_0_io_in_hor_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0_io_in_hor_exp;
        CData/*0:0*/ SystolicArray__DOT__counter;
        CData/*0:0*/ SystolicArray__DOT__pes_1_0_io_in_hor_r_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_0_io_in_hor_r_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0_io_in_hor_r_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_1_io_in_ver_r_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_1_io_in_ver_r_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1_io_in_ver_r_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_1_io_in_hor_r_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_1_io_in_hor_r_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1_io_in_hor_r_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_1_io_in_hor_r_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_1_io_in_hor_r_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_1_io_in_hor_r_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_0_io_in_ver_r_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_0_io_in_ver_r_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0_io_in_ver_r_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_1_io_in_ver_r_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_1_io_in_ver_r_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_1_io_in_ver_r_exp;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_sign;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_0__DOT__result_buffer_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T;
        CData/*0:0*/ SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T;
        CData/*7:0*/ SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff;
        CData/*3:0*/ SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_3;
        CData/*3:0*/ SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_6;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_sign;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_0_1__DOT__result_buffer_man;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T;
        CData/*0:0*/ SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T;
        CData/*7:0*/ SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff;
        CData/*3:0*/ SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_3;
        CData/*3:0*/ SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_6;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_sign;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_0__DOT__result_buffer_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T;
        CData/*0:0*/ SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T;
        CData/*7:0*/ SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff;
        CData/*3:0*/ SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_3;
        CData/*3:0*/ SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_6;
    };
    struct {
        CData/*7:0*/ SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_sign;
        CData/*7:0*/ SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_exp;
        CData/*0:0*/ SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign;
        CData/*3:0*/ SystolicArray__DOT__pes_1_1__DOT__result_buffer_man;
        CData/*7:0*/ SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp;
        CData/*7:0*/ SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T;
        CData/*0:0*/ SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T;
        CData/*7:0*/ SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff;
        CData/*3:0*/ SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_3;
        CData/*3:0*/ SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_6;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__enq_ptr_value;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__deq_ptr_value;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__maybe_full;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ptr_match;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__empty;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__full;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__do_enq;
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp[2];
        CData/*0:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign[2];
        CData/*3:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man[2];
        CData/*7:0*/ SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp[2];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSystolicArray__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSystolicArray);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSystolicArray(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSystolicArray();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    static void _eval_initial_loop(VSystolicArray__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSystolicArray__Syms* symsp, bool first);
  private:
    static QData _change_request(VSystolicArray__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSystolicArray__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VSystolicArray__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VSystolicArray__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSystolicArray__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSystolicArray__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSystolicArray__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VSystolicArray__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSystolicArray__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
