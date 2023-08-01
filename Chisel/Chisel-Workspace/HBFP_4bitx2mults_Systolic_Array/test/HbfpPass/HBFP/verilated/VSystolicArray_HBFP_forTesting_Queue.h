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
    VL_IN8(io_enq_valid,0,0);
    VL_IN8(io_enq_bits_sign_0,0,0);
    VL_IN8(io_enq_bits_sign_1,0,0);
    VL_IN8(io_enq_bits_sign_2,0,0);
    VL_IN8(io_enq_bits_sign_3,0,0);
    VL_IN8(io_enq_bits_sign_4,0,0);
    VL_IN8(io_enq_bits_sign_5,0,0);
    VL_IN8(io_enq_bits_sign_6,0,0);
    VL_IN8(io_enq_bits_sign_7,0,0);
    VL_IN8(io_enq_bits_man_0,5,0);
    VL_IN8(io_enq_bits_man_1,5,0);
    VL_IN8(io_enq_bits_man_2,5,0);
    VL_IN8(io_enq_bits_man_3,5,0);
    VL_IN8(io_enq_bits_man_4,5,0);
    VL_IN8(io_enq_bits_man_5,5,0);
    VL_IN8(io_enq_bits_man_6,5,0);
    VL_IN8(io_enq_bits_man_7,5,0);
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
    VL_OUT8(io_deq_bits_man_0,5,0);
    VL_OUT8(io_deq_bits_man_1,5,0);
    VL_OUT8(io_deq_bits_man_2,5,0);
    VL_OUT8(io_deq_bits_man_3,5,0);
    VL_OUT8(io_deq_bits_man_4,5,0);
    VL_OUT8(io_deq_bits_man_5,5,0);
    VL_OUT8(io_deq_bits_man_6,5,0);
    VL_OUT8(io_deq_bits_man_7,5,0);
    VL_OUT8(io_deq_bits_exp,7,0);
    
    // LOCAL SIGNALS
    CData/*5:0*/ __PVT__enq_ptr_value;
    CData/*5:0*/ __PVT__deq_ptr_value;
    CData/*0:0*/ __PVT__maybe_full;
    CData/*0:0*/ __PVT__ptr_match;
    CData/*0:0*/ __PVT__empty;
    CData/*0:0*/ __PVT__full;
    CData/*0:0*/ __PVT__do_enq;
    CData/*0:0*/ __PVT__do_deq;
    CData/*5:0*/ __PVT___value_T_1;
    CData/*5:0*/ __PVT___value_T_3;
    CData/*0:0*/ __PVT__ram_sign_0[64];
    CData/*0:0*/ __PVT__ram_sign_1[64];
    CData/*0:0*/ __PVT__ram_sign_2[64];
    CData/*0:0*/ __PVT__ram_sign_3[64];
    CData/*0:0*/ __PVT__ram_sign_4[64];
    CData/*0:0*/ __PVT__ram_sign_5[64];
    CData/*0:0*/ __PVT__ram_sign_6[64];
    CData/*0:0*/ __PVT__ram_sign_7[64];
    CData/*5:0*/ __PVT__ram_man_0[64];
    CData/*5:0*/ __PVT__ram_man_1[64];
    CData/*5:0*/ __PVT__ram_man_2[64];
    CData/*5:0*/ __PVT__ram_man_3[64];
    CData/*5:0*/ __PVT__ram_man_4[64];
    CData/*5:0*/ __PVT__ram_man_5[64];
    CData/*5:0*/ __PVT__ram_man_6[64];
    CData/*5:0*/ __PVT__ram_man_7[64];
    CData/*7:0*/ __PVT__ram_exp[64];
    
    // LOCAL VARIABLES
    CData/*5:0*/ __Vdlyvdim0__ram_sign_7__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_7__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_7__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_6__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_6__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_6__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_0__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_0__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_0__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_0__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_0__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_0__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_4__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_4__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_4__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_1__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_1__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_1__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_1__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_1__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_5__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_5__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_5__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_2__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_2__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_2__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_2__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_2__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_3__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_3__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_3__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_3__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_3__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_4__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_4__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_4__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_sign_5__v0;
    CData/*0:0*/ __Vdlyvval__ram_sign_5__v0;
    CData/*0:0*/ __Vdlyvset__ram_sign_5__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_6__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_6__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_6__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_man_7__v0;
    CData/*5:0*/ __Vdlyvval__ram_man_7__v0;
    CData/*0:0*/ __Vdlyvset__ram_man_7__v0;
    CData/*5:0*/ __Vdlyvdim0__ram_exp__v0;
    CData/*7:0*/ __Vdlyvval__ram_exp__v0;
    CData/*0:0*/ __Vdlyvset__ram_exp__v0;
    
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
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__51(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__52(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__53(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__54(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__55(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__56(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__57(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__58(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__59(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__60(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__61(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__62(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__63(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__64(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__65(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__66(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__1(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__18(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__2(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__3(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__4(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__5(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__6(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__7(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__8(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__17(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__9(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__10(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__11(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__12(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__13(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__14(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__15(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__16(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__19(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__20(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__46(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__21(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__44(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__22(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__42(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__23(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__40(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__24(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__35(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__25(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__36(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__26(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__37(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__27(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__28(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__48(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__29(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__47(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__30(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__45(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__31(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__43(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__32(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__41(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__33(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__38(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__34(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__39(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
