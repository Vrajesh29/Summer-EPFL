// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__254(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__254\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_117));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_12 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_11 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_13 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_14 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_15 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_9 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_8 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_10 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_12 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_12)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_12)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_12)));
        this->__PVT__mac__DOT__two_complement_buffer_11 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_11)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_11)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_11)));
        this->__PVT__mac__DOT__two_complement_buffer_13 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_13)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_13)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_13)));
        this->__PVT__mac__DOT__two_complement_buffer_14 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_14)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_14)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_14)));
        this->__PVT__mac__DOT__two_complement_buffer_15 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_15)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_15)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_15)));
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_9 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_9)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_9)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_9)));
        this->__PVT__mac__DOT__two_complement_buffer_8 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_8)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_8)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_8)));
        this->__PVT__mac__DOT__two_complement_buffer_10 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_10)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_10)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_10)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__result_buffer_exp = (0xffU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                                : (IData)(this->__PVT__adder_io_in_b_exp)));
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_sign = (1U & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign))
                                              : (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign))));
    this->__PVT__mac__DOT___GEN_117 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                       & ((IData)(1U) 
                                          + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_12 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_12_r_1));
    this->__PVT__mac__DOT__dotProductRegs_12 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_12))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_12))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_12))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_12)))));
    this->__PVT__mac__DOT__signs_11 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_11_r_1));
    this->__PVT__mac__DOT__dotProductRegs_11 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_11))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_11))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_11))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_11)))));
    this->__PVT__mac__DOT__signs_13 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_13_r_1));
    this->__PVT__mac__DOT__dotProductRegs_13 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_13))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_13))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_13))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_13)))));
    this->__PVT__mac__DOT__signs_14 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_14_r_1));
    this->__PVT__mac__DOT__dotProductRegs_14 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_14))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_14))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_14))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_14)))));
    this->__PVT__mac__DOT__signs_15 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_15_r_1));
    this->__PVT__mac__DOT__dotProductRegs_15 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_15))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_15))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_15))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_15)))));
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
    this->__PVT__mac__DOT__signs_9 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_9_r_1));
    this->__PVT__mac__DOT__dotProductRegs_9 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_9))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_9))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_9))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_9)))));
    this->__PVT__mac__DOT__signs_8 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_8_r_1));
    this->__PVT__mac__DOT__dotProductRegs_8 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_8))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_8))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_8))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_8)))));
    this->__PVT__mac__DOT__signs_10 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_10_r_1));
    this->__PVT__mac__DOT__dotProductRegs_10 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_10))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_10))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_10))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_10)))));
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x200000U 
                                                    & this->__PVT__mac__DOT__sum)
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ this->__PVT__mac__DOT__sum))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & this->__PVT__mac__DOT__sum)))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffffU 
                                                      & this->__PVT__mac__DOT__sum))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & this->__PVT__mac__DOT__sum)))));
    this->__PVT__mac__DOT__signs_12_r_1 = this->__PVT__mac__DOT__signs_12_r;
    this->__PVT__mac__DOT__final_result_12 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_12));
    this->__PVT__mac__DOT__signs_11_r_1 = this->__PVT__mac__DOT__signs_11_r;
    this->__PVT__mac__DOT__final_result_11 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_11));
    this->__PVT__mac__DOT__signs_13_r_1 = this->__PVT__mac__DOT__signs_13_r;
    this->__PVT__mac__DOT__final_result_13 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_13));
    this->__PVT__mac__DOT__signs_14_r_1 = this->__PVT__mac__DOT__signs_14_r;
    this->__PVT__mac__DOT__final_result_14 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_14));
    this->__PVT__mac__DOT__signs_15_r_1 = this->__PVT__mac__DOT__signs_15_r;
    this->__PVT__mac__DOT__final_result_15 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_15));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_9_r_1 = this->__PVT__mac__DOT__signs_9_r;
    this->__PVT__mac__DOT__final_result_9 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_9));
    this->__PVT__mac__DOT__signs_8_r_1 = this->__PVT__mac__DOT__signs_8_r;
    this->__PVT__mac__DOT__final_result_8 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_8));
    this->__PVT__mac__DOT__signs_10_r_1 = this->__PVT__mac__DOT__signs_10_r;
    this->__PVT__mac__DOT__final_result_10 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_10));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_12_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_12) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_12)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_12)));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_323);
    this->__PVT__mac__DOT__signs_11_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_11) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_11)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_11)));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_322);
    this->__PVT__mac__DOT__signs_13_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_13) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_13)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_13)));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_324);
    this->__PVT__mac__DOT__signs_14_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_14) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_14)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_14)));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_325);
    this->__PVT__mac__DOT__signs_15_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_15) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_15)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_15)));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_326);
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_7) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_7)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_7)));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_318);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_0) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_0)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_0)));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_311);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_6) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_6)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_6)));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_317);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_5) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_5)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_5)));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_316);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_4) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_4)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_4)));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_315);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_1) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_1)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_1)));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_312);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_2) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_2)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_2)));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_313);
    this->__PVT__mac__DOT__signs_9_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_9) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_9)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_9)));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_320);
    this->__PVT__mac__DOT__signs_8_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_8) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_8)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_8)));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_319);
    this->__PVT__mac__DOT__signs_10_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_10) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_10)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_10)));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_321);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_sign_3) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_sign_3)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_sign_3)));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_314);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_exp) 
                                                + ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_1_exp)
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_exp))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__1022(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__1022\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13))))));
    this->__PVT__mac__DOT__multiplier_2_13_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_13) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10))))));
    this->__PVT__mac__DOT__multiplier_2_10_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_10) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8))))));
    this->__PVT__mac__DOT__multiplier_2_8_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_8) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9))))));
    this->__PVT__mac__DOT__multiplier_2_9_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_9) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11))))));
    this->__PVT__mac__DOT__multiplier_2_11_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_11) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12))))));
    this->__PVT__mac__DOT__multiplier_2_12_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_12) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14))))));
    this->__PVT__mac__DOT__multiplier_2_14_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_14) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15))))));
    this->__PVT__mac__DOT__multiplier_2_15_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_15) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15)
                                                    : 0U)))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_131 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_101 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_81 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_91 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_111 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_121 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_141 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_151 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                       << 4U)));
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
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_318 = 0U;
        this->__PVT__mac__DOT___GEN_315 = 0U;
        this->__PVT__mac__DOT___GEN_312 = 0U;
        this->__PVT__mac__DOT___GEN_324 = 0U;
        this->__PVT__mac__DOT___GEN_321 = 0U;
        this->__PVT__mac__DOT___GEN_311 = 0U;
        this->__PVT__mac__DOT___GEN_313 = 0U;
        this->__PVT__mac__DOT___GEN_314 = 0U;
        this->__PVT__mac__DOT___GEN_316 = 0U;
        this->__PVT__mac__DOT___GEN_317 = 0U;
        this->__PVT__mac__DOT___GEN_319 = 0U;
        this->__PVT__mac__DOT___GEN_320 = 0U;
        this->__PVT__mac__DOT___GEN_322 = 0U;
        this->__PVT__mac__DOT___GEN_323 = 0U;
        this->__PVT__mac__DOT___GEN_325 = 0U;
        this->__PVT__mac__DOT___GEN_326 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_318 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_71))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_71)));
        this->__PVT__mac__DOT___GEN_315 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_41))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_41)));
        this->__PVT__mac__DOT___GEN_312 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_11))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_11)));
        this->__PVT__mac__DOT___GEN_324 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_131))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_131)));
        this->__PVT__mac__DOT___GEN_321 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_101))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_101)));
        this->__PVT__mac__DOT___GEN_311 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_1))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_1)));
        this->__PVT__mac__DOT___GEN_313 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_21))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_21)));
        this->__PVT__mac__DOT___GEN_314 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_31))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_31)));
        this->__PVT__mac__DOT___GEN_316 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_51))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_51)));
        this->__PVT__mac__DOT___GEN_317 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_61))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_61)));
        this->__PVT__mac__DOT___GEN_319 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_81))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_81)));
        this->__PVT__mac__DOT___GEN_320 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_91))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_91)));
        this->__PVT__mac__DOT___GEN_322 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_111))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_111)));
        this->__PVT__mac__DOT___GEN_323 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_121))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_121)));
        this->__PVT__mac__DOT___GEN_325 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_141))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_141)));
        this->__PVT__mac__DOT___GEN_326 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_151))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_151)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__255(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__255\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_117));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_12 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_11 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_13 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_14 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_15 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_9 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_8 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_10 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_12 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_12)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_12)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_12)));
        this->__PVT__mac__DOT__two_complement_buffer_11 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_11)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_11)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_11)));
        this->__PVT__mac__DOT__two_complement_buffer_13 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_13)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_13)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_13)));
        this->__PVT__mac__DOT__two_complement_buffer_14 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_14)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_14)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_14)));
        this->__PVT__mac__DOT__two_complement_buffer_15 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_15)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_15)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_15)));
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_9 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_9)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_9)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_9)));
        this->__PVT__mac__DOT__two_complement_buffer_8 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_8)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_8)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_8)));
        this->__PVT__mac__DOT__two_complement_buffer_10 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_10)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_10)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_10)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__result_buffer_exp = (0xffU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                                : (IData)(this->__PVT__adder_io_in_b_exp)));
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_sign = (1U & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign))
                                              : (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign))));
    this->__PVT__mac__DOT___GEN_117 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                       & ((IData)(1U) 
                                          + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_12 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_12_r_1));
    this->__PVT__mac__DOT__dotProductRegs_12 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_12))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_12))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_12))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_12)))));
    this->__PVT__mac__DOT__signs_11 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_11_r_1));
    this->__PVT__mac__DOT__dotProductRegs_11 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_11))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_11))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_11))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_11)))));
    this->__PVT__mac__DOT__signs_13 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_13_r_1));
    this->__PVT__mac__DOT__dotProductRegs_13 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_13))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_13))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_13))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_13)))));
    this->__PVT__mac__DOT__signs_14 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_14_r_1));
    this->__PVT__mac__DOT__dotProductRegs_14 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_14))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_14))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_14))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_14)))));
    this->__PVT__mac__DOT__signs_15 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_15_r_1));
    this->__PVT__mac__DOT__dotProductRegs_15 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_15))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_15))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_15))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_15)))));
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
    this->__PVT__mac__DOT__signs_9 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_9_r_1));
    this->__PVT__mac__DOT__dotProductRegs_9 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_9))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_9))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_9))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_9)))));
    this->__PVT__mac__DOT__signs_8 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_8_r_1));
    this->__PVT__mac__DOT__dotProductRegs_8 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_8))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_8))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_8))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_8)))));
    this->__PVT__mac__DOT__signs_10 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_10_r_1));
    this->__PVT__mac__DOT__dotProductRegs_10 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_10))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_10))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_10))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_10)))));
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x200000U 
                                                    & this->__PVT__mac__DOT__sum)
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ this->__PVT__mac__DOT__sum))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & this->__PVT__mac__DOT__sum)))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffffU 
                                                      & this->__PVT__mac__DOT__sum))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & this->__PVT__mac__DOT__sum)))));
    this->__PVT__mac__DOT__signs_12_r_1 = this->__PVT__mac__DOT__signs_12_r;
    this->__PVT__mac__DOT__final_result_12 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_12));
    this->__PVT__mac__DOT__signs_11_r_1 = this->__PVT__mac__DOT__signs_11_r;
    this->__PVT__mac__DOT__final_result_11 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_11));
    this->__PVT__mac__DOT__signs_13_r_1 = this->__PVT__mac__DOT__signs_13_r;
    this->__PVT__mac__DOT__final_result_13 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_13));
    this->__PVT__mac__DOT__signs_14_r_1 = this->__PVT__mac__DOT__signs_14_r;
    this->__PVT__mac__DOT__final_result_14 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_14));
    this->__PVT__mac__DOT__signs_15_r_1 = this->__PVT__mac__DOT__signs_15_r;
    this->__PVT__mac__DOT__final_result_15 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_15));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_9_r_1 = this->__PVT__mac__DOT__signs_9_r;
    this->__PVT__mac__DOT__final_result_9 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_9));
    this->__PVT__mac__DOT__signs_8_r_1 = this->__PVT__mac__DOT__signs_8_r;
    this->__PVT__mac__DOT__final_result_8 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_8));
    this->__PVT__mac__DOT__signs_10_r_1 = this->__PVT__mac__DOT__signs_10_r;
    this->__PVT__mac__DOT__final_result_10 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_10));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_12_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_12) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_12)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_12)));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_323);
    this->__PVT__mac__DOT__signs_11_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_11) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_11)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_11)));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_322);
    this->__PVT__mac__DOT__signs_13_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_13) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_13)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_13)));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_324);
    this->__PVT__mac__DOT__signs_14_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_14) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_14)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_14)));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_325);
    this->__PVT__mac__DOT__signs_15_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_15) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_15)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_15)));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_326);
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_7) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_7)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_7)));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_318);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_0) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_0)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_0)));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_311);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_6) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_6)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_6)));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_317);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_5) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_5)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_5)));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_316);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_4) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_4)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_4)));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_315);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_1) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_1)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_1)));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_312);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_2) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_2)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_2)));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_313);
    this->__PVT__mac__DOT__signs_9_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_9) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_9)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_9)));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_320);
    this->__PVT__mac__DOT__signs_8_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_8) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_8)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_8)));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_319);
    this->__PVT__mac__DOT__signs_10_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_10) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_10)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_10)));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_321);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_sign_3) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_sign_3)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_sign_3)));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_314);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_exp) 
                                                + ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_1_exp)
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_exp))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__1023(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__1023\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13))))));
    this->__PVT__mac__DOT__multiplier_2_13_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_13) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10))))));
    this->__PVT__mac__DOT__multiplier_2_10_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_10) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8))))));
    this->__PVT__mac__DOT__multiplier_2_8_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_8) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9))))));
    this->__PVT__mac__DOT__multiplier_2_9_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_9) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11))))));
    this->__PVT__mac__DOT__multiplier_2_11_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_11) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12))))));
    this->__PVT__mac__DOT__multiplier_2_12_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_12) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14))))));
    this->__PVT__mac__DOT__multiplier_2_14_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_14) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15))))));
    this->__PVT__mac__DOT__multiplier_2_15_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_15) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15)
                                                    : 0U)))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_131 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_101 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_81 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_91 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_111 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_121 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_141 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_151 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                       << 4U)));
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
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_318 = 0U;
        this->__PVT__mac__DOT___GEN_315 = 0U;
        this->__PVT__mac__DOT___GEN_312 = 0U;
        this->__PVT__mac__DOT___GEN_324 = 0U;
        this->__PVT__mac__DOT___GEN_321 = 0U;
        this->__PVT__mac__DOT___GEN_311 = 0U;
        this->__PVT__mac__DOT___GEN_313 = 0U;
        this->__PVT__mac__DOT___GEN_314 = 0U;
        this->__PVT__mac__DOT___GEN_316 = 0U;
        this->__PVT__mac__DOT___GEN_317 = 0U;
        this->__PVT__mac__DOT___GEN_319 = 0U;
        this->__PVT__mac__DOT___GEN_320 = 0U;
        this->__PVT__mac__DOT___GEN_322 = 0U;
        this->__PVT__mac__DOT___GEN_323 = 0U;
        this->__PVT__mac__DOT___GEN_325 = 0U;
        this->__PVT__mac__DOT___GEN_326 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_318 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_71))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_71)));
        this->__PVT__mac__DOT___GEN_315 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_41))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_41)));
        this->__PVT__mac__DOT___GEN_312 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_11))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_11)));
        this->__PVT__mac__DOT___GEN_324 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_131))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_131)));
        this->__PVT__mac__DOT___GEN_321 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_101))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_101)));
        this->__PVT__mac__DOT___GEN_311 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_1))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_1)));
        this->__PVT__mac__DOT___GEN_313 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_21))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_21)));
        this->__PVT__mac__DOT___GEN_314 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_31))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_31)));
        this->__PVT__mac__DOT___GEN_316 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_51))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_51)));
        this->__PVT__mac__DOT___GEN_317 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_61))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_61)));
        this->__PVT__mac__DOT___GEN_319 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_81))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_81)));
        this->__PVT__mac__DOT___GEN_320 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_91))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_91)));
        this->__PVT__mac__DOT___GEN_322 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_111))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_111)));
        this->__PVT__mac__DOT___GEN_323 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_121))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_121)));
        this->__PVT__mac__DOT___GEN_325 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_141))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_141)));
        this->__PVT__mac__DOT___GEN_326 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_151))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_151)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__256(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__256\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_117));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_12 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_11 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_13 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_14 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_15 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_9 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_8 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_10 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_12 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_12)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_12)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_12)));
        this->__PVT__mac__DOT__two_complement_buffer_11 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_11)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_11)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_11)));
        this->__PVT__mac__DOT__two_complement_buffer_13 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_13)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_13)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_13)));
        this->__PVT__mac__DOT__two_complement_buffer_14 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_14)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_14)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_14)));
        this->__PVT__mac__DOT__two_complement_buffer_15 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_15)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_15)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_15)));
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_9 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_9)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_9)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_9)));
        this->__PVT__mac__DOT__two_complement_buffer_8 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_8)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_8)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_8)));
        this->__PVT__mac__DOT__two_complement_buffer_10 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_10)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_10)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_10)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
    }
    this->__PVT__result_buffer_exp = (0xffU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                                : (IData)(this->__PVT__adder_io_in_b_exp)));
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_sign = (1U & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign))
                                              : (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign))));
    this->__PVT__mac__DOT___GEN_117 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                       & ((IData)(1U) 
                                          + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_12 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_12_r_1));
    this->__PVT__mac__DOT__dotProductRegs_12 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_12))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_12))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_12))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_12)))));
    this->__PVT__mac__DOT__signs_11 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_11_r_1));
    this->__PVT__mac__DOT__dotProductRegs_11 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_11))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_11))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_11))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_11)))));
    this->__PVT__mac__DOT__signs_13 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_13_r_1));
    this->__PVT__mac__DOT__dotProductRegs_13 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_13))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_13))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_13))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_13)))));
    this->__PVT__mac__DOT__signs_14 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_14_r_1));
    this->__PVT__mac__DOT__dotProductRegs_14 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_14))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_14))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_14))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_14)))));
    this->__PVT__mac__DOT__signs_15 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_15_r_1));
    this->__PVT__mac__DOT__dotProductRegs_15 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_15))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_15))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_15))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_15)))));
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
    this->__PVT__mac__DOT__signs_9 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_9_r_1));
    this->__PVT__mac__DOT__dotProductRegs_9 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_9))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_9))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_9))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_9)))));
    this->__PVT__mac__DOT__signs_8 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_8_r_1));
    this->__PVT__mac__DOT__dotProductRegs_8 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_8))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_8))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_8))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_8)))));
    this->__PVT__mac__DOT__signs_10 = ((~ (IData)(vlTOPp->reset)) 
                                       & (IData)(this->__PVT__mac__DOT__signs_10_r_1));
    this->__PVT__mac__DOT__dotProductRegs_10 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0x3fU 
                                                 & ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((0x3fU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_10))
                                                      ? 0x3fU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_10))
                                                     : 
                                                    ((0xfU 
                                                      < (IData)(this->__PVT__mac__DOT__final_result_10))
                                                      ? 0xfU
                                                      : (IData)(this->__PVT__mac__DOT__final_result_10)))));
    this->__PVT__mac__DOT___sum_T_9 = (0x1ffffU & (
                                                   VL_EXTENDS_II(17,16, 
                                                                 (0xffffU 
                                                                  & (VL_EXTENDS_II(16,15, 
                                                                                (0x7fffU 
                                                                                & (VL_EXTENDS_II(15,14, 
                                                                                (0x3fffU 
                                                                                & (VL_EXTENDS_II(14,13, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                ((0x1f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(15,14, 
                                                                                ((0x3f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_8) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_8)))))) 
                                                                     + 
                                                                     VL_EXTENDS_II(16,15, 
                                                                                ((0x7f80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_9) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_9)))))) 
                                                   + 
                                                   VL_EXTENDS_II(17,16, 
                                                                 ((0xff80U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_10) 
                                                                                >> 6U)))) 
                                                                      << 7U)) 
                                                                  | (IData)(this->__PVT__mac__DOT__two_complement_buffer_10)))));
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x200000U 
                                                    & this->__PVT__mac__DOT__sum)
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ this->__PVT__mac__DOT__sum))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & this->__PVT__mac__DOT__sum)))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffffU 
                                                      & this->__PVT__mac__DOT__sum))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & this->__PVT__mac__DOT__sum)))));
    this->__PVT__mac__DOT__signs_12_r_1 = this->__PVT__mac__DOT__signs_12_r;
    this->__PVT__mac__DOT__final_result_12 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_12));
    this->__PVT__mac__DOT__signs_11_r_1 = this->__PVT__mac__DOT__signs_11_r;
    this->__PVT__mac__DOT__final_result_11 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_11));
    this->__PVT__mac__DOT__signs_13_r_1 = this->__PVT__mac__DOT__signs_13_r;
    this->__PVT__mac__DOT__final_result_13 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_13));
    this->__PVT__mac__DOT__signs_14_r_1 = this->__PVT__mac__DOT__signs_14_r;
    this->__PVT__mac__DOT__final_result_14 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_14));
    this->__PVT__mac__DOT__signs_15_r_1 = this->__PVT__mac__DOT__signs_15_r;
    this->__PVT__mac__DOT__final_result_15 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_15));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_9_r_1 = this->__PVT__mac__DOT__signs_9_r;
    this->__PVT__mac__DOT__final_result_9 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_9));
    this->__PVT__mac__DOT__signs_8_r_1 = this->__PVT__mac__DOT__signs_8_r;
    this->__PVT__mac__DOT__final_result_8 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_8));
    this->__PVT__mac__DOT__signs_10_r_1 = this->__PVT__mac__DOT__signs_10_r;
    this->__PVT__mac__DOT__final_result_10 = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(this->__PVT__mac__DOT__partial_result_10));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__sum = (0x3fffffU & (VL_EXTENDS_II(22,21, 
                                                             (0x1fffffU 
                                                              & (VL_EXTENDS_II(21,20, 
                                                                               (0xfffffU 
                                                                                & (VL_EXTENDS_II(20,19, 
                                                                                (0x7ffffU 
                                                                                & (VL_EXTENDS_II(19,18, 
                                                                                (0x3ffffU 
                                                                                & (VL_EXTENDS_II(18,17, this->__PVT__mac__DOT___sum_T_9) 
                                                                                + 
                                                                                VL_EXTENDS_II(18,17, 
                                                                                ((0x1ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_11) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_11)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(19,18, 
                                                                                ((0x3ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_12) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_12)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(20,19, 
                                                                                ((0x7ff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_13) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_13)))))) 
                                                                 + 
                                                                 VL_EXTENDS_II(21,20, 
                                                                               ((0xfff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_14) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_14)))))) 
                                               + VL_EXTENDS_II(22,21, 
                                                               ((0x1fff80U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_12_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_12)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_12)) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_12)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_12)));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_323);
    this->__PVT__mac__DOT__signs_11_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_11)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_11)) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_11)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_11)));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_322);
    this->__PVT__mac__DOT__signs_13_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_13)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_13)) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_13)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_13)));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_324);
    this->__PVT__mac__DOT__signs_14_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_14)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_14)) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_14)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_14)));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_325);
    this->__PVT__mac__DOT__signs_15_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_15)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_15)) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_15)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_15)));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_326);
    this->__PVT__mac__DOT__signs_7_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_7)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_7)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_7)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_7)));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_318);
    this->__PVT__mac__DOT__signs_0_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_0)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_0)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_0)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_0)));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_311);
    this->__PVT__mac__DOT__signs_6_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_6)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_6)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_6)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_6)));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_317);
    this->__PVT__mac__DOT__signs_5_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_5)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_5)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_5)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_5)));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_316);
    this->__PVT__mac__DOT__signs_4_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_4)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_4)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_4)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_4)));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_315);
    this->__PVT__mac__DOT__signs_1_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_1)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_1)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_1)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_1)));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_312);
    this->__PVT__mac__DOT__signs_2_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_2)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_2)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_2)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_2)));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_313);
    this->__PVT__mac__DOT__signs_9_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_9)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_9)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_9)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_9)));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_320);
    this->__PVT__mac__DOT__signs_8_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_8)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_8)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_8)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_8)));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_319);
    this->__PVT__mac__DOT__signs_10_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_10)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_10)) 
                                         ^ ((IData)(vlTOPp->io_in_flag)
                                             ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_10)
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_10)));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_321);
    this->__PVT__mac__DOT__signs_3_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_sign_3)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_sign_3)) 
                                        ^ ((IData)(vlTOPp->io_in_flag)
                                            ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_sign_3)
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_sign_3)));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_314);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & (((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_1_exp)
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_exp)) 
                                                + ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_1_exp)
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_exp))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__1024(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__1024\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13))))));
    this->__PVT__mac__DOT__multiplier_2_13_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_13) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10))))));
    this->__PVT__mac__DOT__multiplier_2_10_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_10) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8))))));
    this->__PVT__mac__DOT__multiplier_2_8_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_8) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9))))));
    this->__PVT__mac__DOT__multiplier_2_9_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_9) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11))))));
    this->__PVT__mac__DOT__multiplier_2_11_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_11) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12))))));
    this->__PVT__mac__DOT__multiplier_2_12_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_12) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14))))));
    this->__PVT__mac__DOT__multiplier_2_14_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_14) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15))))));
    this->__PVT__mac__DOT__multiplier_2_15_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_15) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15)
                                                    : 0U)))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_131 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_101 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_81 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_91 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_111 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_121 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_141 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_151 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                       << 4U)));
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
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_318 = 0U;
        this->__PVT__mac__DOT___GEN_315 = 0U;
        this->__PVT__mac__DOT___GEN_312 = 0U;
        this->__PVT__mac__DOT___GEN_324 = 0U;
        this->__PVT__mac__DOT___GEN_321 = 0U;
        this->__PVT__mac__DOT___GEN_311 = 0U;
        this->__PVT__mac__DOT___GEN_313 = 0U;
        this->__PVT__mac__DOT___GEN_314 = 0U;
        this->__PVT__mac__DOT___GEN_316 = 0U;
        this->__PVT__mac__DOT___GEN_317 = 0U;
        this->__PVT__mac__DOT___GEN_319 = 0U;
        this->__PVT__mac__DOT___GEN_320 = 0U;
        this->__PVT__mac__DOT___GEN_322 = 0U;
        this->__PVT__mac__DOT___GEN_323 = 0U;
        this->__PVT__mac__DOT___GEN_325 = 0U;
        this->__PVT__mac__DOT___GEN_326 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_318 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_71))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_71)));
        this->__PVT__mac__DOT___GEN_315 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_41))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_41)));
        this->__PVT__mac__DOT___GEN_312 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_11))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_11)));
        this->__PVT__mac__DOT___GEN_324 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_131))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_131)));
        this->__PVT__mac__DOT___GEN_321 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_101))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_101)));
        this->__PVT__mac__DOT___GEN_311 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_1))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_1)));
        this->__PVT__mac__DOT___GEN_313 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_21))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_21)));
        this->__PVT__mac__DOT___GEN_314 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_31))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_31)));
        this->__PVT__mac__DOT___GEN_316 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_51))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_51)));
        this->__PVT__mac__DOT___GEN_317 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_61))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_61)));
        this->__PVT__mac__DOT___GEN_319 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_81))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_81)));
        this->__PVT__mac__DOT___GEN_320 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_91))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_91)));
        this->__PVT__mac__DOT___GEN_322 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_111))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_111)));
        this->__PVT__mac__DOT___GEN_323 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_121))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_121)));
        this->__PVT__mac__DOT___GEN_325 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_141))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_141)));
        this->__PVT__mac__DOT___GEN_326 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_151))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_151)));
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
}
