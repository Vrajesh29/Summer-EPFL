// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3__172(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3__172\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7;
    }
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4__173(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4__173\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7;
    }
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5__174(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5__174\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7;
    }
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6__175(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6__175\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7__176(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7__176\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0__177(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0__177\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1__178(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1__178\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2__179(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2__179\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3__180(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3__180\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4__181(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4__181\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5__182(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_5__182\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_5_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6__183(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6__183\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7)))))));
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7__184(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7__184\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6) 
                     >> 4U));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7));
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7) 
                     >> 4U));
    } else {
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_b_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_2 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_6 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_16 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_20 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_30 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_34 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_44 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_48 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_58 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_62 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_72 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_76 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_86 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_90 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_100 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7;
        this->__PVT__mac__DOT___multiplier_1_io_in_a_T_104 
            = vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7;
    }
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
                                                            & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                               >> 4U))
                                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6)))))));
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
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7) 
                                               >> 4U))
                                      : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7)))))));
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
    io_in_hor_man_0 = VL_RAND_RESET_I(6);
    io_in_hor_man_1 = VL_RAND_RESET_I(6);
    io_in_hor_man_2 = VL_RAND_RESET_I(6);
    io_in_hor_man_3 = VL_RAND_RESET_I(6);
    io_in_hor_man_4 = VL_RAND_RESET_I(6);
    io_in_hor_man_5 = VL_RAND_RESET_I(6);
    io_in_hor_man_6 = VL_RAND_RESET_I(6);
    io_in_hor_man_7 = VL_RAND_RESET_I(6);
    io_in_hor_exp = VL_RAND_RESET_I(8);
    io_in_ver_sign_0 = VL_RAND_RESET_I(1);
    io_in_ver_sign_1 = VL_RAND_RESET_I(1);
    io_in_ver_sign_2 = VL_RAND_RESET_I(1);
    io_in_ver_sign_3 = VL_RAND_RESET_I(1);
    io_in_ver_sign_4 = VL_RAND_RESET_I(1);
    io_in_ver_sign_5 = VL_RAND_RESET_I(1);
    io_in_ver_sign_6 = VL_RAND_RESET_I(1);
    io_in_ver_sign_7 = VL_RAND_RESET_I(1);
    io_in_ver_man_0 = VL_RAND_RESET_I(6);
    io_in_ver_man_1 = VL_RAND_RESET_I(6);
    io_in_ver_man_2 = VL_RAND_RESET_I(6);
    io_in_ver_man_3 = VL_RAND_RESET_I(6);
    io_in_ver_man_4 = VL_RAND_RESET_I(6);
    io_in_ver_man_5 = VL_RAND_RESET_I(6);
    io_in_ver_man_6 = VL_RAND_RESET_I(6);
    io_in_ver_man_7 = VL_RAND_RESET_I(6);
    io_in_ver_exp = VL_RAND_RESET_I(8);
    io_in_flag = VL_RAND_RESET_I(1);
    io_out_hor_sign_0 = VL_RAND_RESET_I(1);
    io_out_hor_sign_1 = VL_RAND_RESET_I(1);
    io_out_hor_sign_2 = VL_RAND_RESET_I(1);
    io_out_hor_sign_3 = VL_RAND_RESET_I(1);
    io_out_hor_sign_4 = VL_RAND_RESET_I(1);
    io_out_hor_sign_5 = VL_RAND_RESET_I(1);
    io_out_hor_sign_6 = VL_RAND_RESET_I(1);
    io_out_hor_sign_7 = VL_RAND_RESET_I(1);
    io_out_hor_man_0 = VL_RAND_RESET_I(6);
    io_out_hor_man_1 = VL_RAND_RESET_I(6);
    io_out_hor_man_2 = VL_RAND_RESET_I(6);
    io_out_hor_man_3 = VL_RAND_RESET_I(6);
    io_out_hor_man_4 = VL_RAND_RESET_I(6);
    io_out_hor_man_5 = VL_RAND_RESET_I(6);
    io_out_hor_man_6 = VL_RAND_RESET_I(6);
    io_out_hor_man_7 = VL_RAND_RESET_I(6);
    io_out_hor_exp = VL_RAND_RESET_I(8);
    io_out_ver_sign_0 = VL_RAND_RESET_I(1);
    io_out_ver_sign_1 = VL_RAND_RESET_I(1);
    io_out_ver_sign_2 = VL_RAND_RESET_I(1);
    io_out_ver_sign_3 = VL_RAND_RESET_I(1);
    io_out_ver_sign_4 = VL_RAND_RESET_I(1);
    io_out_ver_sign_5 = VL_RAND_RESET_I(1);
    io_out_ver_sign_6 = VL_RAND_RESET_I(1);
    io_out_ver_sign_7 = VL_RAND_RESET_I(1);
    io_out_ver_man_0 = VL_RAND_RESET_I(6);
    io_out_ver_man_1 = VL_RAND_RESET_I(6);
    io_out_ver_man_2 = VL_RAND_RESET_I(6);
    io_out_ver_man_3 = VL_RAND_RESET_I(6);
    io_out_ver_man_4 = VL_RAND_RESET_I(6);
    io_out_ver_man_5 = VL_RAND_RESET_I(6);
    io_out_ver_man_6 = VL_RAND_RESET_I(6);
    io_out_ver_man_7 = VL_RAND_RESET_I(6);
    io_out_ver_exp = VL_RAND_RESET_I(8);
    io_out_result_sign = VL_RAND_RESET_I(1);
    io_out_result_man = VL_RAND_RESET_I(6);
    io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__mac_io_out_result_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_sign = VL_RAND_RESET_I(1);
    __PVT__adder_io_in_b_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_exp = VL_RAND_RESET_I(8);
    __PVT__result_buffer_sign = VL_RAND_RESET_I(1);
    __PVT__result_buffer_man = VL_RAND_RESET_I(6);
    __PVT__result_buffer_exp = VL_RAND_RESET_I(8);
    __PVT__adder_io_in_b_r_sign = VL_RAND_RESET_I(1);
    __PVT__adder_io_in_b_r_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_r_exp = VL_RAND_RESET_I(8);
    __PVT__adder_io_in_b_r_1_sign = VL_RAND_RESET_I(1);
    __PVT__adder_io_in_b_r_1_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_r_1_exp = VL_RAND_RESET_I(8);
    __PVT__adder_io_in_b_r_2_sign = VL_RAND_RESET_I(1);
    __PVT__adder_io_in_b_r_2_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_r_2_exp = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_2_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_3_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_4_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_5_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_6_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_7_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__exp_addition_r = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_1 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_2 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_3 = VL_RAND_RESET_I(9);
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
    __PVT__mac__DOT__two_complement_buffer_0 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_1 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_2 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_3 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_4 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_5 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_6 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_7 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__signs_0 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_4 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_5 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_6 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_7 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__counter = VL_RAND_RESET_I(2);
    __PVT__mac__DOT__partial_result = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_2 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_2 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_6 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_3 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_0_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_0_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_1 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_1 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_16 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_16 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_20 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_15 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_1_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_2 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_2 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_30 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_30 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_34 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_27 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_2_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_3 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_3 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_44 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_44 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_48 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_39 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_3_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_4 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_4 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_58 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_58 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_62 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_51 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_4_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_4_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_5 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_5 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_72 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_72 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_76 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_63 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_5_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_5_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_6 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_6 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_86 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_86 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_90 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_75 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_6_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_6_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_7 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_7 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_100 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_b_T_100 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___multiplier_1_io_in_a_T_104 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT___partial_result_T_87 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_7_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_7_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT___counter_T_1 = VL_RAND_RESET_I(2);
    __PVT__mac__DOT__sum = VL_RAND_RESET_I(14);
    __PVT__mac__DOT__acc_hbfp = VL_RAND_RESET_I(7);
    __PVT__mac__DOT___GEN_175 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_176 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_177 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_178 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_179 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_180 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_181 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_182 = VL_RAND_RESET_I(24);
    __PVT__adder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    __PVT__adder__DOT__exp_diff = VL_RAND_RESET_I(8);
    __PVT__adder__DOT___io_out_result_sign_T_1 = VL_RAND_RESET_I(6);
    __PVT__adder__DOT___io_out_result_sign_T_4 = VL_RAND_RESET_I(6);
    __PVT__adder__DOT__addition = VL_RAND_RESET_I(7);
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}
