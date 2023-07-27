// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#ifndef _VSYSTOLICARRAY_HBFP_FORTESTING_HBFP_PE_H_
#define _VSYSTOLICARRAY_HBFP_FORTESTING_HBFP_PE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VSystolicArray_HBFP_forTesting__Syms;
class VSystolicArray_HBFP_forTesting_VerilatedVcd;


//----------

VL_MODULE(VSystolicArray_HBFP_forTesting_HBFP_PE) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_in_hor_sign_0,0,0);
    VL_IN8(io_in_hor_sign_1,0,0);
    VL_IN8(io_in_hor_sign_2,0,0);
    VL_IN8(io_in_hor_sign_3,0,0);
    VL_IN8(io_in_hor_man_0,3,0);
    VL_IN8(io_in_hor_man_1,3,0);
    VL_IN8(io_in_hor_man_2,3,0);
    VL_IN8(io_in_hor_man_3,3,0);
    VL_IN8(io_in_hor_exp,7,0);
    VL_IN8(io_in_ver_sign_0,0,0);
    VL_IN8(io_in_ver_sign_1,0,0);
    VL_IN8(io_in_ver_sign_2,0,0);
    VL_IN8(io_in_ver_sign_3,0,0);
    VL_IN8(io_in_ver_man_0,3,0);
    VL_IN8(io_in_ver_man_1,3,0);
    VL_IN8(io_in_ver_man_2,3,0);
    VL_IN8(io_in_ver_man_3,3,0);
    VL_IN8(io_in_ver_exp,7,0);
    VL_IN8(io_in_flag,0,0);
    VL_OUT8(io_out_hor_sign_0,0,0);
    VL_OUT8(io_out_hor_sign_1,0,0);
    VL_OUT8(io_out_hor_sign_2,0,0);
    VL_OUT8(io_out_hor_sign_3,0,0);
    VL_OUT8(io_out_hor_man_0,3,0);
    VL_OUT8(io_out_hor_man_1,3,0);
    VL_OUT8(io_out_hor_man_2,3,0);
    VL_OUT8(io_out_hor_man_3,3,0);
    VL_OUT8(io_out_hor_exp,7,0);
    VL_OUT8(io_out_ver_sign_0,0,0);
    VL_OUT8(io_out_ver_sign_1,0,0);
    VL_OUT8(io_out_ver_sign_2,0,0);
    VL_OUT8(io_out_ver_sign_3,0,0);
    VL_OUT8(io_out_ver_man_0,3,0);
    VL_OUT8(io_out_ver_man_1,3,0);
    VL_OUT8(io_out_ver_man_2,3,0);
    VL_OUT8(io_out_ver_man_3,3,0);
    VL_OUT8(io_out_ver_exp,7,0);
    VL_OUT8(io_out_result_sign,0,0);
    VL_OUT8(io_out_result_man,3,0);
    VL_OUT8(io_out_result_exp,7,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__adder_io_out_result_exp;
    CData/*0:0*/ __PVT__result_buffer_sign;
    CData/*3:0*/ __PVT__result_buffer_man;
    CData/*7:0*/ __PVT__result_buffer_exp;
    CData/*7:0*/ __PVT__mac__DOT__multiplier_1_io_out;
    CData/*7:0*/ __PVT__mac__DOT__multiplier_1_1_io_out;
    CData/*7:0*/ __PVT__mac__DOT__multiplier_1_2_io_out;
    CData/*7:0*/ __PVT__mac__DOT__multiplier_1_3_io_out;
    CData/*3:0*/ __PVT__mac__DOT__dotProductRegs_0;
    CData/*3:0*/ __PVT__mac__DOT__dotProductRegs_1;
    CData/*3:0*/ __PVT__mac__DOT__dotProductRegs_2;
    CData/*3:0*/ __PVT__mac__DOT__dotProductRegs_3;
    CData/*4:0*/ __PVT__mac__DOT__two_complement_buffer_0;
    CData/*4:0*/ __PVT__mac__DOT__two_complement_buffer_1;
    CData/*4:0*/ __PVT__mac__DOT__two_complement_buffer_2;
    CData/*4:0*/ __PVT__mac__DOT__two_complement_buffer_3;
    CData/*0:0*/ __PVT__mac__DOT__signs_0;
    CData/*0:0*/ __PVT__mac__DOT__signs_1;
    CData/*0:0*/ __PVT__mac__DOT__signs_2;
    CData/*0:0*/ __PVT__mac__DOT__signs_3;
    CData/*7:0*/ __PVT__mac__DOT__final_result;
    CData/*0:0*/ __PVT__mac__DOT__signs_0_r;
    CData/*7:0*/ __PVT__mac__DOT__final_result_1;
    CData/*0:0*/ __PVT__mac__DOT__signs_1_r;
    CData/*7:0*/ __PVT__mac__DOT__final_result_2;
    CData/*0:0*/ __PVT__mac__DOT__signs_2_r;
    CData/*7:0*/ __PVT__mac__DOT__final_result_3;
    CData/*0:0*/ __PVT__mac__DOT__signs_3_r;
    CData/*7:0*/ __PVT__mac__DOT__sum;
    CData/*4:0*/ __PVT__mac__DOT__acc_hbfp;
    CData/*4:0*/ __PVT__mac__DOT___io_out_result_man_T_10;
    CData/*0:0*/ __PVT__adder__DOT___exp_diff_T;
    CData/*7:0*/ __PVT__adder__DOT__exp_diff;
    CData/*3:0*/ __PVT__adder__DOT___io_out_result_sign_T_1;
    CData/*0:0*/ __PVT__adder__DOT___io_out_result_sign_T_3;
    CData/*3:0*/ __PVT__adder__DOT___io_out_result_sign_T_4;
    CData/*0:0*/ __PVT__adder__DOT___io_out_result_sign_T_6;
    CData/*4:0*/ __PVT__adder__DOT__addition;
    SData/*8:0*/ __PVT__mac__DOT__exp_addition_r;
    SData/*8:0*/ __PVT__mac__DOT__exp_addition_r_1;
    SData/*8:0*/ __PVT__mac__DOT__exp_addition_r_2;
    SData/*8:0*/ __PVT__mac__DOT__exp_addition;
    SData/*8:0*/ __PVT__mac__DOT___io_out_result_exp_T_5;
    
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
    VL_UNCOPYABLE(VSystolicArray_HBFP_forTesting_HBFP_PE);  ///< Copying not allowed
  public:
    VSystolicArray_HBFP_forTesting_HBFP_PE(const char* name = "TOP");
    ~VSystolicArray_HBFP_forTesting_HBFP_PE();
    
    // INTERNAL METHODS
    void __Vconfigure(VSystolicArray_HBFP_forTesting__Syms* symsp, bool first);
    void _combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__49(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__1(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__21(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__2(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__24(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__28(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__4(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__32(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__7(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__22(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__3(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__23(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__5(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__27(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__9(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__11(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__31(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__26(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__6(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__10(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__25(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__13(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__18(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__14(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__20(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__30(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__8(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__12(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__29(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__15(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__19(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__16(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__17(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp);
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__33(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__34(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__35(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__36(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__37(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__38(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__39(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__40(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__41(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__42(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__43(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__44(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__45(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__46(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__47(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__48(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
