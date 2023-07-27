// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

//==========

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__1(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__1\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__21(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__21\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__49(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0__49\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT___io_out_result_man_T_10 
        = ((IData)(vlTOPp->io_in_flag) ? (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp))
            : (0xfU & (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_4 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0xfU & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 4U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x1fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0xfU 
                                                    & (((0xfU 
                                                         & (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT___io_out_result_man_T_10) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT___io_out_result_man_T_10)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 4U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0xfU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__2(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__2\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__24(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1__24\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__4(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__4\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__28(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2__28\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__7(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__7\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__32(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3__32\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__3(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__3\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__22(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0__22\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__5(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__5\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__23(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__23\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__9(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__9\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__27(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__27\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__11(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__11\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__31(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__31\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__6(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__6\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__26(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__26\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__10(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__10\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__25(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__25\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__13(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__13\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__18(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__18\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__14(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__14\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__20(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3__20\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__8(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__8\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__30(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__30\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__12(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__12\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__29(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__29\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__15(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__15\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__19(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__19\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__16(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__16\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0xfU < (IData)(this->__PVT__adder__DOT__addition))
                                       ? 0xfU : (0xfU 
                                                 & (IData)(this->__PVT__adder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__adder_io_out_result_exp;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x1fU 
                                                & ((0x80U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x1fU
                                                     : 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0xfU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x7fU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0xfU
                                                     : 
                                                    (0xfU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_2;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x1fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_2))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_1))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result))));
    this->__PVT__mac__DOT__sum = (0xffU & (VL_EXTENDS_II(8,7, 
                                                         (0x7fU 
                                                          & (VL_EXTENDS_II(7,6, 
                                                                           (0x3fU 
                                                                            & (VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                               + 
                                                                               VL_EXTENDS_II(6,5, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                             + 
                                                             VL_EXTENDS_II(7,6, 
                                                                           ((0x20U 
                                                                             & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                           + VL_EXTENDS_II(8,7, 
                                                           ((0x60U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                               >> 4U)))) 
                                                                << 5U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (IData)(this->__PVT__mac__DOT__final_result_3))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__result_buffer_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__result_buffer_exp))
                                                   : 
                                                  ((IData)(this->__PVT__result_buffer_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    this->__PVT__adder__DOT___io_out_result_sign_T_1 
        = ((3U >= (IData)(this->__PVT__adder__DOT__exp_diff))
            ? (0xfU & ((IData)(this->__PVT__result_buffer_man) 
                       >> (IData)(this->__PVT__adder__DOT__exp_diff)))
            : 0U);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_2));
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out))));
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_1));
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out))));
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_0));
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x1ffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     (0x1ff0U 
                                                      & (((0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                                   >> 2U))
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0)
                                                                : 0U))) 
                                                          + 
                                                          (0xffU 
                                                           & (((IData)(vlTOPp->io_in_flag)
                                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0)
                                                                : 0U) 
                                                              * 
                                                              ((IData)(vlTOPp->io_in_flag)
                                                                ? 
                                                               (3U 
                                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                                                   >> 2U))
                                                                : 0U)))) 
                                                         << 4U)))) 
                                                 + 
                                                 (0xff00U 
                                                  & ((((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                           >> 2U))
                                                        : 0U) 
                                                      * 
                                                      ((IData)(vlTOPp->io_in_flag)
                                                        ? 
                                                       (3U 
                                                        & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                                           >> 2U))
                                                        : 0U)) 
                                                     << 8U)))
                                              : (IData)(this->__PVT__mac__DOT__multiplier_1_io_out))));
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_3));
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : 
                                             (0xffU 
                                              & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x1ffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      (0x1ff0U 
                                                       & (((0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3)
                                                                 : 0U))) 
                                                           + 
                                                           (0xffU 
                                                            & (((IData)(vlTOPp->io_in_flag)
                                                                 ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3)
                                                                 : 0U) 
                                                               * 
                                                               ((IData)(vlTOPp->io_in_flag)
                                                                 ? 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                                          << 4U)))) 
                                                  + 
                                                  (0xff00U 
                                                   & ((((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                                            >> 2U))
                                                         : 0U) 
                                                       * 
                                                       ((IData)(vlTOPp->io_in_flag)
                                                         ? 
                                                        (3U 
                                                         & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                                            >> 2U))
                                                         : 0U)) 
                                                      << 8U)))
                                                  : (IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out))));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__17(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__17\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                     * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3)));
}
