// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#ifndef _VSYSTOLICARRAY_HBFP_FORTESTING_QUEUE_H_
#define _VSYSTOLICARRAY_HBFP_FORTESTING_QUEUE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VSystolicArray_HBFP_forTesting__Syms;
class VSystolicArray_HBFP_forTesting_VerilatedVcd;


//----------

VL_MODULE(VSystolicArray_HBFP_forTesting_Queue) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_enq_ready,0,0);
    VL_IN8(io_enq_bits_sign_0,0,0);
    VL_IN8(io_enq_bits_sign_1,0,0);
    VL_IN8(io_enq_bits_sign_2,0,0);
    VL_IN8(io_enq_bits_sign_3,0,0);
    VL_IN8(io_enq_bits_sign_4,0,0);
    VL_IN8(io_enq_bits_sign_5,0,0);
    VL_IN8(io_enq_bits_sign_6,0,0);
    VL_IN8(io_enq_bits_sign_7,0,0);
    VL_IN8(io_enq_bits_sign_8,0,0);
    VL_IN8(io_enq_bits_sign_9,0,0);
    VL_IN8(io_enq_bits_sign_10,0,0);
    VL_IN8(io_enq_bits_sign_11,0,0);
    VL_IN8(io_enq_bits_sign_12,0,0);
    VL_IN8(io_enq_bits_sign_13,0,0);
    VL_IN8(io_enq_bits_sign_14,0,0);
    VL_IN8(io_enq_bits_sign_15,0,0);
    VL_IN8(io_enq_bits_man_0,5,0);
    VL_IN8(io_enq_bits_man_1,5,0);
    VL_IN8(io_enq_bits_man_2,5,0);
    VL_IN8(io_enq_bits_man_3,5,0);
    VL_IN8(io_enq_bits_man_4,5,0);
    VL_IN8(io_enq_bits_man_5,5,0);
    VL_IN8(io_enq_bits_man_6,5,0);
    VL_IN8(io_enq_bits_man_7,5,0);
    VL_IN8(io_enq_bits_man_8,5,0);
    VL_IN8(io_enq_bits_man_9,5,0);
    VL_IN8(io_enq_bits_man_10,5,0);
    VL_IN8(io_enq_bits_man_11,5,0);
    VL_IN8(io_enq_bits_man_12,5,0);
    VL_IN8(io_enq_bits_man_13,5,0);
    VL_IN8(io_enq_bits_man_14,5,0);
    VL_IN8(io_enq_bits_man_15,5,0);
    VL_IN8(io_enq_bits_exp,7,0);
    VL_IN8(io_deq_ready,0,0);
    VL_OUT8(io_deq_valid,0,0);
    VL_OUT8(io_deq_bits_sign_0,0,0);
    VL_OUT8(io_deq_bits_sign_1,0,0);
    VL_OUT8(io_deq_bits_sign_2,0,0);
    VL_OUT8(io_deq_bits_sign_3,0,0);
    VL_OUT8(io_deq_bits_sign_4,0,0);
    VL_OUT8(io_deq_bits_sign_5,0,0);
    VL_OUT8(io_deq_bits_sign_6,0,0);
    VL_OUT8(io_deq_bits_sign_7,0,0);
    VL_OUT8(io_deq_bits_sign_8,0,0);
    VL_OUT8(io_deq_bits_sign_9,0,0);
    VL_OUT8(io_deq_bits_sign_10,0,0);
    VL_OUT8(io_deq_bits_sign_11,0,0);
    VL_OUT8(io_deq_bits_sign_12,0,0);
    VL_OUT8(io_deq_bits_sign_13,0,0);
    VL_OUT8(io_deq_bits_sign_14,0,0);
    VL_OUT8(io_deq_bits_sign_15,0,0);
    VL_OUT8(io_deq_bits_man_0,5,0);
    VL_OUT8(io_deq_bits_man_1,5,0);
    VL_OUT8(io_deq_bits_man_2,5,0);
    VL_OUT8(io_deq_bits_man_3,5,0);
    VL_OUT8(io_deq_bits_man_4,5,0);
    VL_OUT8(io_deq_bits_man_5,5,0);
    VL_OUT8(io_deq_bits_man_6,5,0);
    VL_OUT8(io_deq_bits_man_7,5,0);
    VL_OUT8(io_deq_bits_man_8,5,0);
    VL_OUT8(io_deq_bits_man_9,5,0);
    VL_OUT8(io_deq_bits_man_10,5,0);
    VL_OUT8(io_deq_bits_man_11,5,0);
    VL_OUT8(io_deq_bits_man_12,5,0);
    VL_OUT8(io_deq_bits_man_13,5,0);
    VL_OUT8(io_deq_bits_man_14,5,0);
    VL_OUT8(io_deq_bits_man_15,5,0);
    VL_OUT8(io_deq_bits_exp,7,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__maybe_full;
    CData/*0:0*/ __PVT__ptr_match;
    CData/*0:0*/ __PVT__empty;
    CData/*0:0*/ __PVT__full;
    CData/*0:0*/ __PVT__do_deq;
    SData/*11:0*/ __PVT__enq_ptr_value;
    SData/*11:0*/ __PVT__deq_ptr_value;
    SData/*11:0*/ __PVT___value_T_1;
    SData/*11:0*/ __PVT___value_T_3;
    CData/*0:0*/ __PVT__ram_sign_0[4096];
    CData/*0:0*/ __PVT__ram_sign_1[4096];
    CData/*0:0*/ __PVT__ram_sign_2[4096];
    CData/*0:0*/ __PVT__ram_sign_3[4096];
    CData/*0:0*/ __PVT__ram_sign_4[4096];
    CData/*0:0*/ __PVT__ram_sign_5[4096];
    CData/*0:0*/ __PVT__ram_sign_6[4096];
    CData/*0:0*/ __PVT__ram_sign_7[4096];
    CData/*0:0*/ __PVT__ram_sign_8[4096];
    CData/*0:0*/ __PVT__ram_sign_9[4096];
    CData/*0:0*/ __PVT__ram_sign_10[4096];
    CData/*0:0*/ __PVT__ram_sign_11[4096];
    CData/*0:0*/ __PVT__ram_sign_12[4096];
    CData/*0:0*/ __PVT__ram_sign_13[4096];
    CData/*0:0*/ __PVT__ram_sign_14[4096];
    CData/*0:0*/ __PVT__ram_sign_15[4096];
    CData/*5:0*/ __PVT__ram_man_0[4096];
    CData/*5:0*/ __PVT__ram_man_1[4096];
    CData/*5:0*/ __PVT__ram_man_2[4096];
    CData/*5:0*/ __PVT__ram_man_3[4096];
    CData/*5:0*/ __PVT__ram_man_4[4096];
    CData/*5:0*/ __PVT__ram_man_5[4096];
    CData/*5:0*/ __PVT__ram_man_6[4096];
    CData/*5:0*/ __PVT__ram_man_7[4096];
    CData/*5:0*/ __PVT__ram_man_8[4096];
    CData/*5:0*/ __PVT__ram_man_9[4096];
    CData/*5:0*/ __PVT__ram_man_10[4096];
    CData/*5:0*/ __PVT__ram_man_11[4096];
    CData/*5:0*/ __PVT__ram_man_12[4096];
    CData/*5:0*/ __PVT__ram_man_13[4096];
    CData/*5:0*/ __PVT__ram_man_14[4096];
    CData/*5:0*/ __PVT__ram_man_15[4096];
    CData/*7:0*/ __PVT__ram_exp[4096];
    
    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*5:0*/ __Vdlyvval__ram_man_8__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_8__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_7__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_7__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_6__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_6__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_5__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_5__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_4__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_4__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_3__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_3__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_2__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_2__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_1__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_1__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_0__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_0__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_15__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_15__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_14__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_14__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_5__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_5__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_4__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_4__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_3__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_3__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_12__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_12__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_11__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_11__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_2__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_2__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_11__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_11__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_10__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_10__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_13__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_13__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_1__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_1__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_10__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_10__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_9__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_9__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_12__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_12__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_0__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_0__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_9__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_9__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_8__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_8__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_6__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_6__v0;
        CData/*0:0*/ __Vdlyvval__ram_sign_7__v0;
        CData/*0:0*/ __Vdlyvset__ram_sign_7__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_13__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_13__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_14__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_14__v0;
        CData/*5:0*/ __Vdlyvval__ram_man_15__v0;
        CData/*0:0*/ __Vdlyvset__ram_man_15__v0;
    };
    struct {
        CData/*7:0*/ __Vdlyvval__ram_exp__v0;
        CData/*0:0*/ __Vdlyvset__ram_exp__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_8__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_7__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_6__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_5__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_4__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_3__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_2__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_1__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_0__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_15__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_14__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_5__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_4__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_3__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_12__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_11__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_2__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_11__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_10__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_13__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_1__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_10__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_9__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_12__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_0__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_9__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_8__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_6__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_sign_7__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_13__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_14__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_man_15__v0;
        SData/*11:0*/ __Vdlyvdim0__ram_exp__v0;
    };
    
    // INTERNAL VARIABLES
  private:
    VSystolicArray_HBFP_forTesting__Syms* __VlSymsp;  // Symbol table
  public:
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSystolicArray_HBFP_forTesting_Queue);  ///< Copying not allowed
  public:
    VSystolicArray_HBFP_forTesting_Queue(const char* name = "TOP");
    ~VSystolicArray_HBFP_forTesting_Queue();
    
    // INTERNAL METHODS
    void __Vconfigure(VSystolicArray_HBFP_forTesting__Syms* symsp, bool first);
  private:
    void _configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__17(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_10__27(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_11__28(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_12__29(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_13__30(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_14__31(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_15__32(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__18(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__19(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__20(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__21(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__22(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__23(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__24(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_8__25(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_9__26(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__1(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_10__11(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_11__12(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_12__13(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_13__14(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_14__15(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_15__16(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__2(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__3(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__4(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__5(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__6(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__7(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__8(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_8__9(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_9__10(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__33(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__81(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_10__91(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_11__92(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_12__93(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_13__94(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_14__95(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_15__96(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__82(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__83(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__84(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__85(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__86(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__87(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__88(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_8__89(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_9__90(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__65(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_10__75(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_11__76(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_12__77(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_13__78(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_14__79(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_15__80(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__66(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__67(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__68(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__69(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__70(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__71(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__72(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_8__73(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_9__74(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
