// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_6__534(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_6__534\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_6_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_7__535(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_7__535\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_7_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_8__536(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_8__536\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_8_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_9__537(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_9__537\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_9_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_10__538(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_10__538\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_11__539(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_11__539\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_12__540(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_12__540\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__541(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__541\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__542(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__542\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__543(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__543\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplication = (0xfffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0) 
                                                * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0)));
    this->__PVT__mac__DOT__multiplication_1 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1)));
    this->__PVT__mac__DOT__multiplication_2 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2)));
    this->__PVT__mac__DOT__multiplication_3 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3)));
    this->__PVT__mac__DOT__multiplication_4 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4)));
    this->__PVT__mac__DOT__multiplication_5 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5)));
    this->__PVT__mac__DOT__multiplication_6 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6)));
    this->__PVT__mac__DOT__multiplication_7 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7)));
    this->__PVT__mac__DOT__multiplication_8 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8)));
    this->__PVT__mac__DOT__multiplication_9 = (0xfffU 
                                               & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9) 
                                                  * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9)));
    this->__PVT__mac__DOT__multiplication_10 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10)));
    this->__PVT__mac__DOT__multiplication_11 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11)));
    this->__PVT__mac__DOT__multiplication_12 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12)));
    this->__PVT__mac__DOT__multiplication_13 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13)));
    this->__PVT__mac__DOT__multiplication_14 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14)));
    this->__PVT__mac__DOT__multiplication_15 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15)));
    this->__PVT__mac__DOT__multiplication_16 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_16) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_16)));
    this->__PVT__mac__DOT__multiplication_17 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_17) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_17)));
    this->__PVT__mac__DOT__multiplication_18 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_18) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_18)));
    this->__PVT__mac__DOT__multiplication_19 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_19) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_19)));
    this->__PVT__mac__DOT__multiplication_20 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_20) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_20)));
    this->__PVT__mac__DOT__multiplication_21 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_21) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_21)));
    this->__PVT__mac__DOT__multiplication_22 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_22) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_22)));
    this->__PVT__mac__DOT__multiplication_23 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_23) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_23)));
    this->__PVT__mac__DOT__multiplication_24 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_24) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_24)));
    this->__PVT__mac__DOT__multiplication_25 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_25) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_25)));
    this->__PVT__mac__DOT__multiplication_26 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_26) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_26)));
    this->__PVT__mac__DOT__multiplication_27 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_27) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_27)));
    this->__PVT__mac__DOT__multiplication_28 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_28) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_28)));
    this->__PVT__mac__DOT__multiplication_29 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_29) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_29)));
    this->__PVT__mac__DOT__multiplication_30 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_30) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_30)));
    this->__PVT__mac__DOT__multiplication_31 = (0xfffU 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_31) 
                                                   * (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_31)));
    this->__PVT__mac__DOT___sum_T_19 = (0x7ffffffU 
                                        & (VL_EXTENDS_II(27,26, 
                                                         (0x3ffffffU 
                                                          & (VL_EXTENDS_II(26,25, 
                                                                           (0x1ffffffU 
                                                                            & (VL_EXTENDS_II(25,24, 
                                                                                (0xffffffU 
                                                                                & (VL_EXTENDS_II(24,23, 
                                                                                (0x7fffffU 
                                                                                & (VL_EXTENDS_II(23,22, 
                                                                                (0x3fffffU 
                                                                                & (VL_EXTENDS_II(22,21, 
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
                                                                                + 
                                                                                VL_EXTENDS_II(22,21, 
                                                                                ((0x1fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_15) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_15)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(23,22, 
                                                                                ((0x3fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_16) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_16)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(24,23, 
                                                                                ((0x7fff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_17) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_17)))))) 
                                                                               + 
                                                                               VL_EXTENDS_II(25,24, 
                                                                                ((0xffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_18) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_18)))))) 
                                                             + 
                                                             VL_EXTENDS_II(26,25, 
                                                                           ((0x1ffff80U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_19) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_19)))))) 
                                           + VL_EXTENDS_II(27,26, 
                                                           ((0x3ffff80U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_20) 
                                                                               >> 6U)))) 
                                                                << 7U)) 
                                                            | (IData)(this->__PVT__mac__DOT__two_complement_buffer_20)))));
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
    this->__PVT__mac__DOT___sum_T_29 = (0x1fffffffffULL 
                                        & (VL_EXTENDS_QQ(37,36, 
                                                         (0xfffffffffULL 
                                                          & (VL_EXTENDS_QQ(36,35, 
                                                                           (0x7ffffffffULL 
                                                                            & (VL_EXTENDS_QQ(35,34, 
                                                                                (0x3ffffffffULL 
                                                                                & (VL_EXTENDS_QQ(34,33, 
                                                                                (0x1ffffffffULL 
                                                                                & (VL_EXTENDS_QI(33,32, 
                                                                                (VL_EXTENDS_II(32,31, 
                                                                                (0x7fffffffU 
                                                                                & (VL_EXTENDS_II(31,30, 
                                                                                (0x3fffffffU 
                                                                                & (VL_EXTENDS_II(30,29, 
                                                                                (0x1fffffffU 
                                                                                & (VL_EXTENDS_II(29,28, 
                                                                                (0xfffffffU 
                                                                                & (VL_EXTENDS_II(28,27, this->__PVT__mac__DOT___sum_T_19) 
                                                                                + 
                                                                                VL_EXTENDS_II(28,27, 
                                                                                ((0x7ffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_21) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_21)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(29,28, 
                                                                                ((0xfffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_22) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_22)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(30,29, 
                                                                                ((0x1fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_23) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_23)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(31,30, 
                                                                                ((0x3fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_24) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_24)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(32,31, 
                                                                                ((0x7fffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_25) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_25))))) 
                                                                                + 
                                                                                VL_EXTENDS_QI(33,32, 
                                                                                ((0xffffff80U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_26) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_26)))))) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(34,33, 
                                                                                (((QData)((IData)(
                                                                                (0x3ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_27) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_27))))))) 
                                                                               + 
                                                                               VL_EXTENDS_QQ(35,34, 
                                                                                (((QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_28) 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_28))))))) 
                                                             + 
                                                             VL_EXTENDS_QQ(36,35, 
                                                                           (((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_29) 
                                                                                >> 6U))))))) 
                                                                             << 7U) 
                                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_29))))))) 
                                           + VL_EXTENDS_QQ(37,36, 
                                                           (((QData)((IData)(
                                                                             (0x1fffffffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_30) 
                                                                                >> 6U))))))) 
                                                             << 7U) 
                                                            | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_30))))));
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__mac__DOT__sum = (0x3fffffffffULL & 
                                  (VL_EXTENDS_QQ(38,37, this->__PVT__mac__DOT___sum_T_29) 
                                   + VL_EXTENDS_QQ(38,37, 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_31) 
                                                                                >> 6U))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(this->__PVT__mac__DOT__two_complement_buffer_31))))));
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((0x3fU & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT___io_out_result_sign_T_6 
        = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                  > (IData)(this->__PVT__result_buffer_man))
                  ? ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                     >> 6U) : (IData)(this->__PVT__result_buffer_sign)));
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((0x3fU 
                                                         & (IData)(this->__PVT__mac__DOT__acc_hbfp)) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac__DOT__acc_hbfp)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__result_buffer_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__result_buffer_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__result_buffer_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__result_buffer_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__result_buffer_man)))))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in_hor_sign_0 = VL_RAND_RESET_I(1);
    io_in_hor_sign_1 = VL_RAND_RESET_I(1);
    io_in_hor_sign_2 = VL_RAND_RESET_I(1);
    io_in_hor_sign_3 = VL_RAND_RESET_I(1);
    io_in_hor_sign_4 = VL_RAND_RESET_I(1);
    io_in_hor_sign_5 = VL_RAND_RESET_I(1);
    io_in_hor_sign_6 = VL_RAND_RESET_I(1);
    io_in_hor_sign_7 = VL_RAND_RESET_I(1);
    io_in_hor_sign_8 = VL_RAND_RESET_I(1);
    io_in_hor_sign_9 = VL_RAND_RESET_I(1);
    io_in_hor_sign_10 = VL_RAND_RESET_I(1);
    io_in_hor_sign_11 = VL_RAND_RESET_I(1);
    io_in_hor_sign_12 = VL_RAND_RESET_I(1);
    io_in_hor_sign_13 = VL_RAND_RESET_I(1);
    io_in_hor_sign_14 = VL_RAND_RESET_I(1);
    io_in_hor_sign_15 = VL_RAND_RESET_I(1);
    io_in_hor_sign_16 = VL_RAND_RESET_I(1);
    io_in_hor_sign_17 = VL_RAND_RESET_I(1);
    io_in_hor_sign_18 = VL_RAND_RESET_I(1);
    io_in_hor_sign_19 = VL_RAND_RESET_I(1);
    io_in_hor_sign_20 = VL_RAND_RESET_I(1);
    io_in_hor_sign_21 = VL_RAND_RESET_I(1);
    io_in_hor_sign_22 = VL_RAND_RESET_I(1);
    io_in_hor_sign_23 = VL_RAND_RESET_I(1);
    io_in_hor_sign_24 = VL_RAND_RESET_I(1);
    io_in_hor_sign_25 = VL_RAND_RESET_I(1);
    io_in_hor_sign_26 = VL_RAND_RESET_I(1);
    io_in_hor_sign_27 = VL_RAND_RESET_I(1);
    io_in_hor_sign_28 = VL_RAND_RESET_I(1);
    io_in_hor_sign_29 = VL_RAND_RESET_I(1);
    io_in_hor_sign_30 = VL_RAND_RESET_I(1);
    io_in_hor_sign_31 = VL_RAND_RESET_I(1);
    io_in_hor_man_0 = VL_RAND_RESET_I(6);
    io_in_hor_man_1 = VL_RAND_RESET_I(6);
    io_in_hor_man_2 = VL_RAND_RESET_I(6);
    io_in_hor_man_3 = VL_RAND_RESET_I(6);
    io_in_hor_man_4 = VL_RAND_RESET_I(6);
    io_in_hor_man_5 = VL_RAND_RESET_I(6);
    io_in_hor_man_6 = VL_RAND_RESET_I(6);
    io_in_hor_man_7 = VL_RAND_RESET_I(6);
    io_in_hor_man_8 = VL_RAND_RESET_I(6);
    io_in_hor_man_9 = VL_RAND_RESET_I(6);
    io_in_hor_man_10 = VL_RAND_RESET_I(6);
    io_in_hor_man_11 = VL_RAND_RESET_I(6);
    io_in_hor_man_12 = VL_RAND_RESET_I(6);
    io_in_hor_man_13 = VL_RAND_RESET_I(6);
    io_in_hor_man_14 = VL_RAND_RESET_I(6);
    io_in_hor_man_15 = VL_RAND_RESET_I(6);
    io_in_hor_man_16 = VL_RAND_RESET_I(6);
    io_in_hor_man_17 = VL_RAND_RESET_I(6);
    io_in_hor_man_18 = VL_RAND_RESET_I(6);
    io_in_hor_man_19 = VL_RAND_RESET_I(6);
    io_in_hor_man_20 = VL_RAND_RESET_I(6);
    io_in_hor_man_21 = VL_RAND_RESET_I(6);
    io_in_hor_man_22 = VL_RAND_RESET_I(6);
    io_in_hor_man_23 = VL_RAND_RESET_I(6);
    io_in_hor_man_24 = VL_RAND_RESET_I(6);
    io_in_hor_man_25 = VL_RAND_RESET_I(6);
    io_in_hor_man_26 = VL_RAND_RESET_I(6);
    io_in_hor_man_27 = VL_RAND_RESET_I(6);
    io_in_hor_man_28 = VL_RAND_RESET_I(6);
    io_in_hor_man_29 = VL_RAND_RESET_I(6);
    io_in_hor_man_30 = VL_RAND_RESET_I(6);
    io_in_hor_man_31 = VL_RAND_RESET_I(6);
    io_in_hor_exp = VL_RAND_RESET_I(8);
    io_in_ver_sign_0 = VL_RAND_RESET_I(1);
    io_in_ver_sign_1 = VL_RAND_RESET_I(1);
    io_in_ver_sign_2 = VL_RAND_RESET_I(1);
    io_in_ver_sign_3 = VL_RAND_RESET_I(1);
    io_in_ver_sign_4 = VL_RAND_RESET_I(1);
    io_in_ver_sign_5 = VL_RAND_RESET_I(1);
    io_in_ver_sign_6 = VL_RAND_RESET_I(1);
    io_in_ver_sign_7 = VL_RAND_RESET_I(1);
    io_in_ver_sign_8 = VL_RAND_RESET_I(1);
    io_in_ver_sign_9 = VL_RAND_RESET_I(1);
    io_in_ver_sign_10 = VL_RAND_RESET_I(1);
    io_in_ver_sign_11 = VL_RAND_RESET_I(1);
    io_in_ver_sign_12 = VL_RAND_RESET_I(1);
    io_in_ver_sign_13 = VL_RAND_RESET_I(1);
    io_in_ver_sign_14 = VL_RAND_RESET_I(1);
    io_in_ver_sign_15 = VL_RAND_RESET_I(1);
    io_in_ver_sign_16 = VL_RAND_RESET_I(1);
    io_in_ver_sign_17 = VL_RAND_RESET_I(1);
    io_in_ver_sign_18 = VL_RAND_RESET_I(1);
    io_in_ver_sign_19 = VL_RAND_RESET_I(1);
    io_in_ver_sign_20 = VL_RAND_RESET_I(1);
    io_in_ver_sign_21 = VL_RAND_RESET_I(1);
    io_in_ver_sign_22 = VL_RAND_RESET_I(1);
    io_in_ver_sign_23 = VL_RAND_RESET_I(1);
    io_in_ver_sign_24 = VL_RAND_RESET_I(1);
    io_in_ver_sign_25 = VL_RAND_RESET_I(1);
    io_in_ver_sign_26 = VL_RAND_RESET_I(1);
    io_in_ver_sign_27 = VL_RAND_RESET_I(1);
    io_in_ver_sign_28 = VL_RAND_RESET_I(1);
    io_in_ver_sign_29 = VL_RAND_RESET_I(1);
    io_in_ver_sign_30 = VL_RAND_RESET_I(1);
    io_in_ver_sign_31 = VL_RAND_RESET_I(1);
    io_in_ver_man_0 = VL_RAND_RESET_I(6);
    io_in_ver_man_1 = VL_RAND_RESET_I(6);
    io_in_ver_man_2 = VL_RAND_RESET_I(6);
    io_in_ver_man_3 = VL_RAND_RESET_I(6);
    io_in_ver_man_4 = VL_RAND_RESET_I(6);
    io_in_ver_man_5 = VL_RAND_RESET_I(6);
    io_in_ver_man_6 = VL_RAND_RESET_I(6);
    io_in_ver_man_7 = VL_RAND_RESET_I(6);
    io_in_ver_man_8 = VL_RAND_RESET_I(6);
    io_in_ver_man_9 = VL_RAND_RESET_I(6);
    io_in_ver_man_10 = VL_RAND_RESET_I(6);
    io_in_ver_man_11 = VL_RAND_RESET_I(6);
    io_in_ver_man_12 = VL_RAND_RESET_I(6);
    io_in_ver_man_13 = VL_RAND_RESET_I(6);
    io_in_ver_man_14 = VL_RAND_RESET_I(6);
    io_in_ver_man_15 = VL_RAND_RESET_I(6);
    io_in_ver_man_16 = VL_RAND_RESET_I(6);
    io_in_ver_man_17 = VL_RAND_RESET_I(6);
    io_in_ver_man_18 = VL_RAND_RESET_I(6);
    io_in_ver_man_19 = VL_RAND_RESET_I(6);
    io_in_ver_man_20 = VL_RAND_RESET_I(6);
    io_in_ver_man_21 = VL_RAND_RESET_I(6);
    io_in_ver_man_22 = VL_RAND_RESET_I(6);
    io_in_ver_man_23 = VL_RAND_RESET_I(6);
    io_in_ver_man_24 = VL_RAND_RESET_I(6);
    io_in_ver_man_25 = VL_RAND_RESET_I(6);
    io_in_ver_man_26 = VL_RAND_RESET_I(6);
    io_in_ver_man_27 = VL_RAND_RESET_I(6);
    io_in_ver_man_28 = VL_RAND_RESET_I(6);
    io_in_ver_man_29 = VL_RAND_RESET_I(6);
    io_in_ver_man_30 = VL_RAND_RESET_I(6);
    io_in_ver_man_31 = VL_RAND_RESET_I(6);
    io_in_ver_exp = VL_RAND_RESET_I(8);
    io_out_hor_sign_0 = VL_RAND_RESET_I(1);
    io_out_hor_sign_1 = VL_RAND_RESET_I(1);
    io_out_hor_sign_2 = VL_RAND_RESET_I(1);
    io_out_hor_sign_3 = VL_RAND_RESET_I(1);
    io_out_hor_sign_4 = VL_RAND_RESET_I(1);
    io_out_hor_sign_5 = VL_RAND_RESET_I(1);
    io_out_hor_sign_6 = VL_RAND_RESET_I(1);
    io_out_hor_sign_7 = VL_RAND_RESET_I(1);
    io_out_hor_sign_8 = VL_RAND_RESET_I(1);
    io_out_hor_sign_9 = VL_RAND_RESET_I(1);
    io_out_hor_sign_10 = VL_RAND_RESET_I(1);
    io_out_hor_sign_11 = VL_RAND_RESET_I(1);
    io_out_hor_sign_12 = VL_RAND_RESET_I(1);
    io_out_hor_sign_13 = VL_RAND_RESET_I(1);
    io_out_hor_sign_14 = VL_RAND_RESET_I(1);
    io_out_hor_sign_15 = VL_RAND_RESET_I(1);
    io_out_hor_sign_16 = VL_RAND_RESET_I(1);
    io_out_hor_sign_17 = VL_RAND_RESET_I(1);
    io_out_hor_sign_18 = VL_RAND_RESET_I(1);
    io_out_hor_sign_19 = VL_RAND_RESET_I(1);
    io_out_hor_sign_20 = VL_RAND_RESET_I(1);
    io_out_hor_sign_21 = VL_RAND_RESET_I(1);
    io_out_hor_sign_22 = VL_RAND_RESET_I(1);
    io_out_hor_sign_23 = VL_RAND_RESET_I(1);
    io_out_hor_sign_24 = VL_RAND_RESET_I(1);
    io_out_hor_sign_25 = VL_RAND_RESET_I(1);
    io_out_hor_sign_26 = VL_RAND_RESET_I(1);
    io_out_hor_sign_27 = VL_RAND_RESET_I(1);
    io_out_hor_sign_28 = VL_RAND_RESET_I(1);
    io_out_hor_sign_29 = VL_RAND_RESET_I(1);
    io_out_hor_sign_30 = VL_RAND_RESET_I(1);
    io_out_hor_sign_31 = VL_RAND_RESET_I(1);
    io_out_hor_man_0 = VL_RAND_RESET_I(6);
    io_out_hor_man_1 = VL_RAND_RESET_I(6);
    io_out_hor_man_2 = VL_RAND_RESET_I(6);
    io_out_hor_man_3 = VL_RAND_RESET_I(6);
    io_out_hor_man_4 = VL_RAND_RESET_I(6);
    io_out_hor_man_5 = VL_RAND_RESET_I(6);
    io_out_hor_man_6 = VL_RAND_RESET_I(6);
    io_out_hor_man_7 = VL_RAND_RESET_I(6);
    io_out_hor_man_8 = VL_RAND_RESET_I(6);
    io_out_hor_man_9 = VL_RAND_RESET_I(6);
    io_out_hor_man_10 = VL_RAND_RESET_I(6);
    io_out_hor_man_11 = VL_RAND_RESET_I(6);
    io_out_hor_man_12 = VL_RAND_RESET_I(6);
    io_out_hor_man_13 = VL_RAND_RESET_I(6);
    io_out_hor_man_14 = VL_RAND_RESET_I(6);
    io_out_hor_man_15 = VL_RAND_RESET_I(6);
    io_out_hor_man_16 = VL_RAND_RESET_I(6);
    io_out_hor_man_17 = VL_RAND_RESET_I(6);
    io_out_hor_man_18 = VL_RAND_RESET_I(6);
    io_out_hor_man_19 = VL_RAND_RESET_I(6);
    io_out_hor_man_20 = VL_RAND_RESET_I(6);
    io_out_hor_man_21 = VL_RAND_RESET_I(6);
    io_out_hor_man_22 = VL_RAND_RESET_I(6);
    io_out_hor_man_23 = VL_RAND_RESET_I(6);
    io_out_hor_man_24 = VL_RAND_RESET_I(6);
    io_out_hor_man_25 = VL_RAND_RESET_I(6);
    io_out_hor_man_26 = VL_RAND_RESET_I(6);
    io_out_hor_man_27 = VL_RAND_RESET_I(6);
    io_out_hor_man_28 = VL_RAND_RESET_I(6);
    io_out_hor_man_29 = VL_RAND_RESET_I(6);
    io_out_hor_man_30 = VL_RAND_RESET_I(6);
    io_out_hor_man_31 = VL_RAND_RESET_I(6);
    io_out_hor_exp = VL_RAND_RESET_I(8);
    io_out_ver_sign_0 = VL_RAND_RESET_I(1);
    io_out_ver_sign_1 = VL_RAND_RESET_I(1);
    io_out_ver_sign_2 = VL_RAND_RESET_I(1);
    io_out_ver_sign_3 = VL_RAND_RESET_I(1);
    io_out_ver_sign_4 = VL_RAND_RESET_I(1);
    io_out_ver_sign_5 = VL_RAND_RESET_I(1);
    io_out_ver_sign_6 = VL_RAND_RESET_I(1);
    io_out_ver_sign_7 = VL_RAND_RESET_I(1);
    io_out_ver_sign_8 = VL_RAND_RESET_I(1);
    io_out_ver_sign_9 = VL_RAND_RESET_I(1);
    io_out_ver_sign_10 = VL_RAND_RESET_I(1);
    io_out_ver_sign_11 = VL_RAND_RESET_I(1);
    io_out_ver_sign_12 = VL_RAND_RESET_I(1);
    io_out_ver_sign_13 = VL_RAND_RESET_I(1);
    io_out_ver_sign_14 = VL_RAND_RESET_I(1);
    io_out_ver_sign_15 = VL_RAND_RESET_I(1);
    io_out_ver_sign_16 = VL_RAND_RESET_I(1);
    io_out_ver_sign_17 = VL_RAND_RESET_I(1);
    io_out_ver_sign_18 = VL_RAND_RESET_I(1);
    io_out_ver_sign_19 = VL_RAND_RESET_I(1);
    io_out_ver_sign_20 = VL_RAND_RESET_I(1);
    io_out_ver_sign_21 = VL_RAND_RESET_I(1);
    io_out_ver_sign_22 = VL_RAND_RESET_I(1);
    io_out_ver_sign_23 = VL_RAND_RESET_I(1);
    io_out_ver_sign_24 = VL_RAND_RESET_I(1);
    io_out_ver_sign_25 = VL_RAND_RESET_I(1);
    io_out_ver_sign_26 = VL_RAND_RESET_I(1);
    io_out_ver_sign_27 = VL_RAND_RESET_I(1);
    io_out_ver_sign_28 = VL_RAND_RESET_I(1);
    io_out_ver_sign_29 = VL_RAND_RESET_I(1);
    io_out_ver_sign_30 = VL_RAND_RESET_I(1);
    io_out_ver_sign_31 = VL_RAND_RESET_I(1);
    io_out_ver_man_0 = VL_RAND_RESET_I(6);
    io_out_ver_man_1 = VL_RAND_RESET_I(6);
    io_out_ver_man_2 = VL_RAND_RESET_I(6);
    io_out_ver_man_3 = VL_RAND_RESET_I(6);
    io_out_ver_man_4 = VL_RAND_RESET_I(6);
    io_out_ver_man_5 = VL_RAND_RESET_I(6);
    io_out_ver_man_6 = VL_RAND_RESET_I(6);
    io_out_ver_man_7 = VL_RAND_RESET_I(6);
    io_out_ver_man_8 = VL_RAND_RESET_I(6);
    io_out_ver_man_9 = VL_RAND_RESET_I(6);
    io_out_ver_man_10 = VL_RAND_RESET_I(6);
    io_out_ver_man_11 = VL_RAND_RESET_I(6);
    io_out_ver_man_12 = VL_RAND_RESET_I(6);
    io_out_ver_man_13 = VL_RAND_RESET_I(6);
    io_out_ver_man_14 = VL_RAND_RESET_I(6);
    io_out_ver_man_15 = VL_RAND_RESET_I(6);
    io_out_ver_man_16 = VL_RAND_RESET_I(6);
    io_out_ver_man_17 = VL_RAND_RESET_I(6);
    io_out_ver_man_18 = VL_RAND_RESET_I(6);
    io_out_ver_man_19 = VL_RAND_RESET_I(6);
    io_out_ver_man_20 = VL_RAND_RESET_I(6);
    io_out_ver_man_21 = VL_RAND_RESET_I(6);
    io_out_ver_man_22 = VL_RAND_RESET_I(6);
    io_out_ver_man_23 = VL_RAND_RESET_I(6);
    io_out_ver_man_24 = VL_RAND_RESET_I(6);
    io_out_ver_man_25 = VL_RAND_RESET_I(6);
    io_out_ver_man_26 = VL_RAND_RESET_I(6);
    io_out_ver_man_27 = VL_RAND_RESET_I(6);
    io_out_ver_man_28 = VL_RAND_RESET_I(6);
    io_out_ver_man_29 = VL_RAND_RESET_I(6);
    io_out_ver_man_30 = VL_RAND_RESET_I(6);
    io_out_ver_man_31 = VL_RAND_RESET_I(6);
    io_out_ver_exp = VL_RAND_RESET_I(8);
    io_out_result_sign = VL_RAND_RESET_I(1);
    io_out_result_man = VL_RAND_RESET_I(6);
    io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__adder_io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__result_buffer_sign = VL_RAND_RESET_I(1);
    __PVT__result_buffer_man = VL_RAND_RESET_I(6);
    __PVT__result_buffer_exp = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__exp_addition_r = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_1 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition = VL_RAND_RESET_I(9);
    __PVT__mac__DOT___io_out_result_exp_T_5 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__dotProductRegs_0 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_1 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_2 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_3 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_4 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_5 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_6 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_7 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_8 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_9 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_10 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_11 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_12 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_13 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_14 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_15 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_16 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_17 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_18 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_19 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_20 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_21 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_22 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_23 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_24 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_25 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_26 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_27 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_28 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_29 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_30 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_31 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__two_complement_buffer_0 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_1 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_2 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_3 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_4 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_5 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_6 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_7 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_8 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_9 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_10 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_11 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_12 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_13 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_14 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_15 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_16 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_17 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_18 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_19 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_20 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_21 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_22 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_23 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_24 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_25 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_26 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_27 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_28 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_29 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_30 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_31 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__signs_0 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_4 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_5 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_6 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_7 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_8 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_9 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_10 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_11 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_12 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_13 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_14 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_15 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_16 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_17 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_18 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_19 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_20 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_21 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_22 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_23 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_24 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_25 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_26 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_27 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_28 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_29 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_30 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_31 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__multiplication = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_1 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_2 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_3 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_4 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_5 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_6 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_7 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_8 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_9 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_10 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_11 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_12 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_13 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_14 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_15 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_16 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_17 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_18 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_19 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_20 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_21 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_22 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_23 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_24 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_25 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_26 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_27 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_28 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_29 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_30 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__multiplication_31 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___sum_T_9 = VL_RAND_RESET_I(17);
    __PVT__mac__DOT___sum_T_19 = VL_RAND_RESET_I(27);
    __PVT__mac__DOT___sum_T_29 = VL_RAND_RESET_Q(37);
    __PVT__mac__DOT__sum = VL_RAND_RESET_Q(38);
    __PVT__mac__DOT__acc_hbfp = VL_RAND_RESET_I(7);
    __PVT__adder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    __PVT__adder__DOT__exp_diff = VL_RAND_RESET_I(8);
    __PVT__adder__DOT___io_out_result_sign_T_1 = VL_RAND_RESET_I(6);
    __PVT__adder__DOT___io_out_result_sign_T_3 = VL_RAND_RESET_I(1);
    __PVT__adder__DOT___io_out_result_sign_T_4 = VL_RAND_RESET_I(6);
    __PVT__adder__DOT___io_out_result_sign_T_6 = VL_RAND_RESET_I(1);
    __PVT__adder__DOT__addition = VL_RAND_RESET_I(7);
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}
