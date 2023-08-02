// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5__41(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5__41\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5__233(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5__233\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6__42(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6__42\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6__234(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6__234\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7__55(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7__55\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_7)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_7)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_3)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_3)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_2)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_2)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_0)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_0)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_6)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_6)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_4)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_4)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_5)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_5)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_sign_1)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_sign_1)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & (((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_3_exp)
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_r_exp)) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7__247(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7__247\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0__43(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0__43\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0__235(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0__235\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1__44(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1__44\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1__236(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1__236\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2__45(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2__45\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2__237(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2__237\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3__46(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3__46\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3__238(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3__238\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4__47(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4__47\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4__239(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4__239\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5__48(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5__48\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 1U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_182);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_178);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_177);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_175);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_181);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_179);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_180);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_176);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_exp)));
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5__240(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5__240\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7;
    }
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6)
                                                           : 
                                                          ((2U 
                                                            == (IData)(this->__PVT__mac__DOT__counter))
                                                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2)
                                                            : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6))))) 
                                                     * 
                                                     (0xfU 
                                                      & ((0U 
                                                          == (IData)(this->__PVT__mac__DOT__counter))
                                                          ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                          : 
                                                         ((1U 
                                                           == (IData)(this->__PVT__mac__DOT__counter))
                                                           ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2)
                                                           : 
                                                          ((IData)(vlTOPp->io_in_flag)
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0)))))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2)))))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4)))))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6)))))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1)))))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3)))))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5)))))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7)))))));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                             << 4U)));
    } else {
        this->__PVT__mac__DOT___partial_result_T_3 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_27 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out));
        this->__PVT__mac__DOT___partial_result_T_51 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out));
        this->__PVT__mac__DOT___partial_result_T_75 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out));
        this->__PVT__mac__DOT___partial_result_T_15 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out));
        this->__PVT__mac__DOT___partial_result_T_39 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out));
        this->__PVT__mac__DOT___partial_result_T_63 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out));
        this->__PVT__mac__DOT___partial_result_T_87 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out));
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_175 = 0U;
        this->__PVT__mac__DOT___GEN_177 = 0U;
        this->__PVT__mac__DOT___GEN_179 = 0U;
        this->__PVT__mac__DOT___GEN_181 = 0U;
        this->__PVT__mac__DOT___GEN_176 = 0U;
        this->__PVT__mac__DOT___GEN_178 = 0U;
        this->__PVT__mac__DOT___GEN_180 = 0U;
        this->__PVT__mac__DOT___GEN_182 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_175 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_3)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))))));
        this->__PVT__mac__DOT___GEN_177 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_27)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))))));
        this->__PVT__mac__DOT___GEN_179 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_51)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out))))));
        this->__PVT__mac__DOT___GEN_181 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_75)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out))))));
        this->__PVT__mac__DOT___GEN_176 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_15)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))))));
        this->__PVT__mac__DOT___GEN_178 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_39)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))))));
        this->__PVT__mac__DOT___GEN_180 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_63)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out))))));
        this->__PVT__mac__DOT___GEN_182 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_87)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out))))));
    }
}
