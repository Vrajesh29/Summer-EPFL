// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14__463(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_14__463\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_14_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15__464(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_15__464\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_15_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0__525(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_0__525\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_0_io_in_ver_r_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1__466(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_1__466\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_1_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2__467(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_2__467\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_2_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3__468(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_3__468\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_3_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4__469(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_4__469\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_4_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5__470(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_5__470\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_5_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6__471(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_6__471\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_6_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7__472(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_7__472\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_7_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8__473(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_8__473\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_8_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9__474(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_9__474\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_9_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10__475(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_10__475\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_10_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11__476(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_11__476\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_11_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12__477(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_12__477\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_12_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13__478(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_13__478\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_13_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14__479(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_14__479\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_14_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15__480(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_13_15__480\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_13_15_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0__526(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_0__526\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_0_io_in_ver_r_man_15)))));
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1__482(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_1__482\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_1_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2__483(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_2__483\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_2_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3__484(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_3__484\n"); );
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
    this->__PVT__mac_io_out_result_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(this->__PVT__mac__DOT__acc_hbfp)
                                                    : 
                                                   ((0xfU 
                                                     < 
                                                     (0x3fU 
                                                      & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                     ? 0xfU
                                                     : (IData)(this->__PVT__mac__DOT__acc_hbfp))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_0)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_1))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_1))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_1)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_2))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_2))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_2)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_3))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_3))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_3)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_4))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_4))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_4)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_5))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_5))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_5)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_6))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_6))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_6)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_7))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_7))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_7)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_8))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_8))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_8)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_9))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_9))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_9)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_10))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_10))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_10)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_11))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_11))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_11)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_12))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_12))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_12)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_13))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_13))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_13)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_14))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_14))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_14)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_hor_r_man_15))) 
                  * (0xfU & ((IData)(vlTOPp->io_in_flag)
                              ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_15))
                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_3_io_in_ver_r_man_15)))));
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
    this->__PVT__adder_io_out_result_exp = (0xffU & 
                                            ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                              ? (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)
                                              : (IData)(this->__PVT__result_buffer_exp)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__adder__DOT___io_out_result_sign_T_3 
        = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
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
