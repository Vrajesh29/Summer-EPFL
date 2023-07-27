// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12__208(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12__208\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 3U;
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
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
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
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
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
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
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
    this->__PVT__mac__DOT__signs_12_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_12) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_12));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_355);
    this->__PVT__mac__DOT__signs_11_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_11) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_11));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_354);
    this->__PVT__mac__DOT__signs_13_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_13) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_13));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_356);
    this->__PVT__mac__DOT__signs_14_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_14) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_14));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_357);
    this->__PVT__mac__DOT__signs_15_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_15) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_15));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_358);
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_350);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_343);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_349);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_348);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_347);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_344);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_345);
    this->__PVT__mac__DOT__signs_9_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_9) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_9));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_352);
    this->__PVT__mac__DOT__signs_8_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_8) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_8));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_351);
    this->__PVT__mac__DOT__signs_10_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_10) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_10));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_353);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_346);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_exp)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12__976(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12__976\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15) 
                     >> 4U));
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
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_man_15;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_7)))))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_8)))))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_9)))))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_10)))))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_11)))))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_12)))))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_13)))))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_14)))))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_man_15)))))));
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out));
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
        this->__PVT__mac__DOT___GEN_343 = 0U;
        this->__PVT__mac__DOT___GEN_344 = 0U;
        this->__PVT__mac__DOT___GEN_345 = 0U;
        this->__PVT__mac__DOT___GEN_346 = 0U;
        this->__PVT__mac__DOT___GEN_347 = 0U;
        this->__PVT__mac__DOT___GEN_348 = 0U;
        this->__PVT__mac__DOT___GEN_349 = 0U;
        this->__PVT__mac__DOT___GEN_350 = 0U;
        this->__PVT__mac__DOT___GEN_351 = 0U;
        this->__PVT__mac__DOT___GEN_352 = 0U;
        this->__PVT__mac__DOT___GEN_353 = 0U;
        this->__PVT__mac__DOT___GEN_354 = 0U;
        this->__PVT__mac__DOT___GEN_355 = 0U;
        this->__PVT__mac__DOT___GEN_356 = 0U;
        this->__PVT__mac__DOT___GEN_357 = 0U;
        this->__PVT__mac__DOT___GEN_358 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_343 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_344 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_345 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_346 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_347 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_348 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_349 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_350 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_351 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out))))));
        this->__PVT__mac__DOT___GEN_352 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out))))));
        this->__PVT__mac__DOT___GEN_353 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out))))));
        this->__PVT__mac__DOT___GEN_354 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out))))));
        this->__PVT__mac__DOT___GEN_355 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out))))));
        this->__PVT__mac__DOT___GEN_356 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out))))));
        this->__PVT__mac__DOT___GEN_357 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out))))));
        this->__PVT__mac__DOT___GEN_358 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13__209(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13__209\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 3U;
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
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
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
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
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
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
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
    this->__PVT__mac__DOT__signs_12_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_12) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_12));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_355);
    this->__PVT__mac__DOT__signs_11_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_11) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_11));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_354);
    this->__PVT__mac__DOT__signs_13_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_13) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_13));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_356);
    this->__PVT__mac__DOT__signs_14_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_14) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_14));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_357);
    this->__PVT__mac__DOT__signs_15_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_15) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_15));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_358);
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_350);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_343);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_349);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_348);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_347);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_344);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_345);
    this->__PVT__mac__DOT__signs_9_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_9) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_9));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_352);
    this->__PVT__mac__DOT__signs_8_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_8) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_8));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_351);
    this->__PVT__mac__DOT__signs_10_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_10) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_10));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_353);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_346);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_exp)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13__977(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13__977\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15) 
                     >> 4U));
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
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_man_15;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_7)))))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_8)))))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_9)))))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_10)))))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_11)))))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_12)))))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_13)))))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_14)))))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_man_15)))))));
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out));
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
        this->__PVT__mac__DOT___GEN_343 = 0U;
        this->__PVT__mac__DOT___GEN_344 = 0U;
        this->__PVT__mac__DOT___GEN_345 = 0U;
        this->__PVT__mac__DOT___GEN_346 = 0U;
        this->__PVT__mac__DOT___GEN_347 = 0U;
        this->__PVT__mac__DOT___GEN_348 = 0U;
        this->__PVT__mac__DOT___GEN_349 = 0U;
        this->__PVT__mac__DOT___GEN_350 = 0U;
        this->__PVT__mac__DOT___GEN_351 = 0U;
        this->__PVT__mac__DOT___GEN_352 = 0U;
        this->__PVT__mac__DOT___GEN_353 = 0U;
        this->__PVT__mac__DOT___GEN_354 = 0U;
        this->__PVT__mac__DOT___GEN_355 = 0U;
        this->__PVT__mac__DOT___GEN_356 = 0U;
        this->__PVT__mac__DOT___GEN_357 = 0U;
        this->__PVT__mac__DOT___GEN_358 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_343 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_344 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_345 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_346 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_347 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_348 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_349 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_350 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_351 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out))))));
        this->__PVT__mac__DOT___GEN_352 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out))))));
        this->__PVT__mac__DOT___GEN_353 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out))))));
        this->__PVT__mac__DOT___GEN_354 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out))))));
        this->__PVT__mac__DOT___GEN_355 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out))))));
        this->__PVT__mac__DOT___GEN_356 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out))))));
        this->__PVT__mac__DOT___GEN_357 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out))))));
        this->__PVT__mac__DOT___GEN_358 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14__210(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14__210\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 3U;
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
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
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
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
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
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
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
    this->__PVT__mac__DOT__signs_12_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_12) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_12));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_355);
    this->__PVT__mac__DOT__signs_11_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_11) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_11));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_354);
    this->__PVT__mac__DOT__signs_13_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_13) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_13));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_356);
    this->__PVT__mac__DOT__signs_14_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_14) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_14));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_357);
    this->__PVT__mac__DOT__signs_15_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_15) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_15));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_358);
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_350);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_343);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_349);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_348);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_347);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_344);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_345);
    this->__PVT__mac__DOT__signs_9_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_9) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_9));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_352);
    this->__PVT__mac__DOT__signs_8_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_8) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_8));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_351);
    this->__PVT__mac__DOT__signs_10_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_10) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_10));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_353);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_346);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_exp)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14__978(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14__978\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15) 
                     >> 4U));
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
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_man_15;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_7)))))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_8)))))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_9)))))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_10)))))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_11)))))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_12)))))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_13)))))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_14)))))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_man_15)))))));
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out));
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
        this->__PVT__mac__DOT___GEN_343 = 0U;
        this->__PVT__mac__DOT___GEN_344 = 0U;
        this->__PVT__mac__DOT___GEN_345 = 0U;
        this->__PVT__mac__DOT___GEN_346 = 0U;
        this->__PVT__mac__DOT___GEN_347 = 0U;
        this->__PVT__mac__DOT___GEN_348 = 0U;
        this->__PVT__mac__DOT___GEN_349 = 0U;
        this->__PVT__mac__DOT___GEN_350 = 0U;
        this->__PVT__mac__DOT___GEN_351 = 0U;
        this->__PVT__mac__DOT___GEN_352 = 0U;
        this->__PVT__mac__DOT___GEN_353 = 0U;
        this->__PVT__mac__DOT___GEN_354 = 0U;
        this->__PVT__mac__DOT___GEN_355 = 0U;
        this->__PVT__mac__DOT___GEN_356 = 0U;
        this->__PVT__mac__DOT___GEN_357 = 0U;
        this->__PVT__mac__DOT___GEN_358 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_343 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_344 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_345 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_346 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_347 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_348 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_349 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_350 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_351 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out))))));
        this->__PVT__mac__DOT___GEN_352 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out))))));
        this->__PVT__mac__DOT___GEN_353 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out))))));
        this->__PVT__mac__DOT___GEN_354 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out))))));
        this->__PVT__mac__DOT___GEN_355 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out))))));
        this->__PVT__mac__DOT___GEN_356 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out))))));
        this->__PVT__mac__DOT___GEN_357 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out))))));
        this->__PVT__mac__DOT___GEN_358 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15__239(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15__239\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 3U;
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
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
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
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
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
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
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
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
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
    this->__PVT__mac__DOT__signs_12_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_12)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_12)) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_12));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_355);
    this->__PVT__mac__DOT__signs_11_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_11)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_11)) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_11));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_354);
    this->__PVT__mac__DOT__signs_13_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_13)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_13)) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_13));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_356);
    this->__PVT__mac__DOT__signs_14_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_14)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_14)) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_14));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_357);
    this->__PVT__mac__DOT__signs_15_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_15)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_15)) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_15));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_358);
    this->__PVT__mac__DOT__signs_7_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_7)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_7)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_350);
    this->__PVT__mac__DOT__signs_0_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_0)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_0)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_343);
    this->__PVT__mac__DOT__signs_6_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_6)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_6)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_349);
    this->__PVT__mac__DOT__signs_5_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_5)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_5)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_348);
    this->__PVT__mac__DOT__signs_4_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_4)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_4)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_347);
    this->__PVT__mac__DOT__signs_1_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_1)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_1)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_344);
    this->__PVT__mac__DOT__signs_2_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_2)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_2)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_345);
    this->__PVT__mac__DOT__signs_9_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_9)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_9)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_9));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_352);
    this->__PVT__mac__DOT__signs_8_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_8)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_8)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_8));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_351);
    this->__PVT__mac__DOT__signs_10_r = (((IData)(vlTOPp->io_in_flag)
                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_10)
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_10)) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_10));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_353);
    this->__PVT__mac__DOT__signs_3_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_sign_3)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_sign_3)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_346);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & (((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_3_exp)
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_exp)) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_exp)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15__1007(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15__1007\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15) 
                     >> 4U));
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
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_man_15;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_7)))))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_8)))))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_9)))))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_10)))))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_11)))))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_12)))))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_13)))))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_14)))))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_man_15)))))));
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out));
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
        this->__PVT__mac__DOT___GEN_343 = 0U;
        this->__PVT__mac__DOT___GEN_344 = 0U;
        this->__PVT__mac__DOT___GEN_345 = 0U;
        this->__PVT__mac__DOT___GEN_346 = 0U;
        this->__PVT__mac__DOT___GEN_347 = 0U;
        this->__PVT__mac__DOT___GEN_348 = 0U;
        this->__PVT__mac__DOT___GEN_349 = 0U;
        this->__PVT__mac__DOT___GEN_350 = 0U;
        this->__PVT__mac__DOT___GEN_351 = 0U;
        this->__PVT__mac__DOT___GEN_352 = 0U;
        this->__PVT__mac__DOT___GEN_353 = 0U;
        this->__PVT__mac__DOT___GEN_354 = 0U;
        this->__PVT__mac__DOT___GEN_355 = 0U;
        this->__PVT__mac__DOT___GEN_356 = 0U;
        this->__PVT__mac__DOT___GEN_357 = 0U;
        this->__PVT__mac__DOT___GEN_358 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_343 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_344 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_345 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_346 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_347 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_348 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_349 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_350 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_351 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out))))));
        this->__PVT__mac__DOT___GEN_352 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out))))));
        this->__PVT__mac__DOT___GEN_353 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out))))));
        this->__PVT__mac__DOT___GEN_354 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out))))));
        this->__PVT__mac__DOT___GEN_355 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out))))));
        this->__PVT__mac__DOT___GEN_356 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out))))));
        this->__PVT__mac__DOT___GEN_357 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out))))));
        this->__PVT__mac__DOT___GEN_358 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out))))));
    }
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0__211(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0__211\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_2_exp = this->__PVT__adder_io_in_b_r_1_exp;
    this->__PVT__adder_io_in_b_r_2_man = this->__PVT__adder_io_in_b_r_1_man;
    this->__PVT__adder_io_in_b_r_2_sign = this->__PVT__adder_io_in_b_r_1_sign;
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__counter = 3U;
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
        this->__PVT__mac__DOT__counter = ((3U > (IData)(this->__PVT__mac__DOT__counter))
                                           ? (IData)(this->__PVT__mac__DOT___counter_T_1)
                                           : 0U);
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
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__adder_io_in_b_r_1_exp = this->__PVT__adder_io_in_b_r_exp;
    this->__PVT__adder_io_in_b_r_1_man = this->__PVT__adder_io_in_b_r_man;
    this->__PVT__adder_io_in_b_r_1_sign = this->__PVT__adder_io_in_b_r_sign;
    this->__PVT__mac__DOT___counter_T_1 = (3U & ((IData)(1U) 
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
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
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
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
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
    this->__PVT__mac__DOT__signs_12_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_12) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_12));
    this->__PVT__mac__DOT__partial_result_12 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_355);
    this->__PVT__mac__DOT__signs_11_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_11) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_11));
    this->__PVT__mac__DOT__partial_result_11 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_354);
    this->__PVT__mac__DOT__signs_13_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_13) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_13));
    this->__PVT__mac__DOT__partial_result_13 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_356);
    this->__PVT__mac__DOT__signs_14_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_14) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_14));
    this->__PVT__mac__DOT__partial_result_14 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_357);
    this->__PVT__mac__DOT__signs_15_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_15) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_15));
    this->__PVT__mac__DOT__partial_result_15 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_358);
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_350);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_343);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_349);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_348);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_347);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_344);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_345);
    this->__PVT__mac__DOT__signs_9_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_9) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_9));
    this->__PVT__mac__DOT__partial_result_9 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_352);
    this->__PVT__mac__DOT__signs_8_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_8) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_8));
    this->__PVT__mac__DOT__partial_result_8 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_351);
    this->__PVT__mac__DOT__signs_10_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_10) 
                                         ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_10));
    this->__PVT__mac__DOT__partial_result_10 = (0xfffU 
                                                & this->__PVT__mac__DOT___GEN_353);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_346);
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_exp)));
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
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0__979(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0__979\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_2_exp;
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_2_man;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_2_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15) 
                     >> 4U));
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
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15;
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_7)))))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_114)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_118))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_114)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_8)))))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_128)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_132))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_128)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_9)))))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_142)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_146))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_142)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_10)))))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_156)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_160))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_156)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_11)))))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_170)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_174))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_170)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_12)))))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_184)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_188))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_184)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_13)))))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_198)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_202))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_198)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_14)))))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                            ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                            : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216)
                                : ((2U == (IData)(this->__PVT__mac__DOT__counter))
                                    ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_212)
                                    : (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_a_T_216))))) 
                  * (0xfU & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                              ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                              : ((1U == (IData)(this->__PVT__mac__DOT__counter))
                                  ? (IData)(this->__PVT__mac__DOT___multiplier_1_io_in_b_T_212)
                                  : ((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_man_15)))))));
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                             << 4U)));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                          + ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
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
        this->__PVT__mac__DOT___partial_result_T_99 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out));
        this->__PVT__mac__DOT___partial_result_T_111 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out));
        this->__PVT__mac__DOT___partial_result_T_123 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out));
        this->__PVT__mac__DOT___partial_result_T_135 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out));
        this->__PVT__mac__DOT___partial_result_T_147 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out));
        this->__PVT__mac__DOT___partial_result_T_159 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out));
        this->__PVT__mac__DOT___partial_result_T_171 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out));
        this->__PVT__mac__DOT___partial_result_T_183 
            = (0xffffU & (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out));
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
        this->__PVT__mac__DOT___GEN_343 = 0U;
        this->__PVT__mac__DOT___GEN_344 = 0U;
        this->__PVT__mac__DOT___GEN_345 = 0U;
        this->__PVT__mac__DOT___GEN_346 = 0U;
        this->__PVT__mac__DOT___GEN_347 = 0U;
        this->__PVT__mac__DOT___GEN_348 = 0U;
        this->__PVT__mac__DOT___GEN_349 = 0U;
        this->__PVT__mac__DOT___GEN_350 = 0U;
        this->__PVT__mac__DOT___GEN_351 = 0U;
        this->__PVT__mac__DOT___GEN_352 = 0U;
        this->__PVT__mac__DOT___GEN_353 = 0U;
        this->__PVT__mac__DOT___GEN_354 = 0U;
        this->__PVT__mac__DOT___GEN_355 = 0U;
        this->__PVT__mac__DOT___GEN_356 = 0U;
        this->__PVT__mac__DOT___GEN_357 = 0U;
        this->__PVT__mac__DOT___GEN_358 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_343 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_344 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_345 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_346 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_347 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_348 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_349 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_350 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_351 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_99)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out))))));
        this->__PVT__mac__DOT___GEN_352 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_111)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out))))));
        this->__PVT__mac__DOT___GEN_353 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_123)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out))))));
        this->__PVT__mac__DOT___GEN_354 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_135)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out))))));
        this->__PVT__mac__DOT___GEN_355 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_147)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out))))));
        this->__PVT__mac__DOT___GEN_356 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_159)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out))))));
        this->__PVT__mac__DOT___GEN_357 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_171)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out))))));
        this->__PVT__mac__DOT___GEN_358 = (0xffffffU 
                                           & ((0U == (IData)(this->__PVT__mac__DOT__counter))
                                               ? (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out)
                                               : ((1U 
                                                   == (IData)(this->__PVT__mac__DOT__counter))
                                                   ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                   : 
                                                  ((2U 
                                                    == (IData)(this->__PVT__mac__DOT__counter))
                                                    ? (IData)(this->__PVT__mac__DOT___partial_result_T_183)
                                                    : 
                                                   ((IData)(vlTOPp->io_in_flag)
                                                     ? 
                                                    ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                      << 8U))
                                                     : (IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out))))));
    }
}
