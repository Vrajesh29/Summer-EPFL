// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub21(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+89940,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89941,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89942,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89943,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+89944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+89945,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89946,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+89947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89948,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+89949,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89950,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89951,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+89953,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+89954,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89955,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+89956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89957,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+89958,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89959,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89960,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89961,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+89962,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+89963,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89964,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+89965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89966,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+89967,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89968,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89969,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89970,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+89971,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+89972,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89973,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+89974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89975,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+89976,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89977,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89978,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89979,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+89980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+89981,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89982,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+89983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89984,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+89985,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89986,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89987,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89988,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+89989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+89990,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89991,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+89992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89993,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+89994,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+89995,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89996,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+89997,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+89998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+89999,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90000,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90002,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90003,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90004,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90005,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90006,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90007,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90008,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90009,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90011,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90012,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90013,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90014,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90015,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90017,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90018,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90020,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90021,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90022,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90023,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90024,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90026,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90027,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90029,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90030,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90031,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90032,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90033,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90035,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90036,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90038,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90039,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90040,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90041,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90042,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90043,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90044,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90045,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90046,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90047,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90048,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90049,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90050,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90051,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90052,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90053,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90054,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90055,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90056,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90057,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90058,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90059,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90060,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90062,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90063,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90064,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90065,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90066,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90067,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90068,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90069,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90071,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90072,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90073,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90074,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90075,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90076,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90077,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90078,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90079,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90080,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90081,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90082,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90083,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90084,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90085,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90086,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90087,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90088,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90090,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90091,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90093,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90094,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90095,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90096,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90097,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90099,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90100,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90102,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90103,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90104,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90105,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90108,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90109,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90111,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90112,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90113,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90114,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90117,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90118,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90120,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90121,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90122,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90123,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90126,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90127,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90129,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90130,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90131,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90132,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90133,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+90134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+90135,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90136,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90138,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90139,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90140,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90141,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+90143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+90144,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90145,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90147,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90148,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90149,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90150,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90153,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90154,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90156,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90157,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90158,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90159,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90162,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90163,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90165,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90166,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90168,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90169,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90171,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90172,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90174,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90175,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90177,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90178,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90180,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90181,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90183,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90184,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90186,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90187,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90190,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90191,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90193,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90194,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90195,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90196,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90198,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90199,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90200,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90201,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90202,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90203,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90204,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90205,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90206,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90207,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90208,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90209,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90210,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90211,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90212,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90213,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90214,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90217,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90218,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90219,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90220,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90221,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90222,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90223,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90226,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90227,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90229,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90230,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90232,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90235,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90236,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90238,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90239,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90241,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90243,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90244,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90245,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90247,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90248,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90250,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90251,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90253,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90254,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90256,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90257,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90259,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90262,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90263,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90265,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90266,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90268,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90271,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90272,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90274,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90275,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90277,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+90279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+90280,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90281,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90283,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90284,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90286,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+90288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+90289,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90290,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90292,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90293,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90295,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90298,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90299,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90301,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90302,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90304,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90307,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90308,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90310,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90311,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90313,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90316,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90317,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90319,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90320,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90322,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90324,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90325,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90326,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90328,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90329,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90331,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90332,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90334,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90335,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90336,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90338,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90339,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90340,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90341,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90343,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90345,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90347,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90348,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90349,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90350,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90352,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90353,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90354,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90356,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90357,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90358,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90359,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90360,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90361,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90362,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90363,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90365,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90366,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90367,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90368,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90369,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90371,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90372,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90374,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90375,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90377,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90380,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90381,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90383,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90384,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90386,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90389,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90390,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90392,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90393,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90395,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90397,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90398,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90399,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90401,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90402,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90404,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90407,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90408,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90410,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90411,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90413,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90416,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90417,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90419,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90420,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90422,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+90424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+90425,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90426,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90428,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90429,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90431,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+90433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+90434,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90435,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90437,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90438,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90440,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90443,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90444,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90446,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90447,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90449,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90452,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90453,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90455,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90456,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90458,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90461,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90462,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90464,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90465,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90467,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90470,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90471,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90473,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90474,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90476,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90477,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90479,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90480,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90481,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90483,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90484,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90485,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90486,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90488,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90489,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90490,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90491,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90492,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90493,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90494,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90495,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90497,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90498,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90499,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90500,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90501,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90502,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90503,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90504,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90506,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90507,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90508,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90509,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90510,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90511,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90512,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90513,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90515,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90516,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90517,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90519,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90520,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90522,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90525,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90526,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90528,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90529,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90531,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90534,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90535,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90537,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90538,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90540,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90543,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90544,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90546,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90547,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90549,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90552,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90553,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90555,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90556,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90557,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90558,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90559,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90561,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90562,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90564,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90565,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90567,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90568,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+90569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+90570,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90571,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90573,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90574,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90575,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90576,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+90578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+90579,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90580,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90582,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90583,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90584,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90585,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90588,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90589,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90591,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90592,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90594,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90596,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90597,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90598,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90599,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90600,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90601,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90603,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90605,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90606,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90607,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90609,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90610,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90612,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90613,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90615,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90616,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90618,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90619,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90621,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90622,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90624,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90625,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90626,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90627,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90628,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90629,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90630,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90631,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90632,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90633,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90634,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90635,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90636,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90637,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90638,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90639,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90640,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90641,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90642,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90643,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90644,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90645,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90646,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90647,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90648,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90649,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90652,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90653,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90654,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90655,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90656,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90657,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90658,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90661,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90662,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90663,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90664,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90665,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90666,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90667,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90670,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90671,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90672,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90673,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90674,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90675,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90676,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90678,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90679,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90680,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90681,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90682,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90683,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90685,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90686,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90688,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90689,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90690,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90691,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90692,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90693,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90694,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90697,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90698,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90700,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90701,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90703,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90706,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90707,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90708,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90709,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90710,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90711,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+90714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+90715,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90716,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90717,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90718,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90719,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90721,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+90723,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+90724,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90725,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90727,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90728,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90729,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90733,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90734,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90735,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90736,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90737,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90738,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90739,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90742,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90743,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90745,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90746,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90751,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90752,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90753,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90754,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90755,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90757,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90760,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90761,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90763,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90764,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90766,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90767,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90769,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90770,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90771,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90772,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90773,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90774,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90775,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90776,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90779,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90780,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90781,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90782,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90783,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90784,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90785,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90787,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90788,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90789,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90790,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90791,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90792,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90793,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90794,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90796,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90797,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90798,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90799,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90800,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90801,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90802,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90803,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90804,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90806,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90807,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90808,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90809,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90810,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90812,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90815,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90816,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90817,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90818,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90819,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90820,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90821,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90823,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90824,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90825,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90826,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90827,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90828,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90829,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90830,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90832,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90833,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90834,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90835,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90836,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90837,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90840,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90842,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90843,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90844,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90845,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90846,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90847,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90848,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90851,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90852,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90853,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90854,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90855,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90857,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+90859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+90860,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90861,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90862,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90863,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+90864,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90865,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+90868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+90869,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90870,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90871,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90872,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+90873,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90875,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+90877,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+90878,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90879,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90880,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90881,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+90882,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90883,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90885,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+90886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+90887,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90888,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90889,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90890,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+90891,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90892,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90893,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+90895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+90896,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90897,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90898,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90899,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+90900,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90902,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+90904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+90905,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90906,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90907,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90908,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+90909,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90910,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90911,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90912,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+90913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+90914,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+90915,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90916,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90917,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90918,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+90919,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90920,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90921,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90922,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+90923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+90924,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90925,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90926,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90927,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+90928,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90929,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90930,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+90932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+90933,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90934,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90935,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90936,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+90937,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90938,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90939,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+90941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+90942,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90943,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90944,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90945,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+90946,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90948,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+90950,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+90951,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90952,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90953,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90954,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+90955,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90957,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+90959,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+90960,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90961,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90962,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90963,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+90964,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90966,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+90968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+90969,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90970,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90971,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90972,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+90973,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90975,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+90977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+90978,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90979,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90980,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90981,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+90982,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90984,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+90986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+90987,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90988,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90989,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90990,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+90991,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90993,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+90995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+90996,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+90997,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+90998,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+90999,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91000,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91002,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+91004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+91005,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91006,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91007,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91008,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91009,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91011,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+91013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+91014,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91015,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91016,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91017,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91018,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91020,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+91022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+91023,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91024,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91025,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91026,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91027,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91029,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+91031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+91032,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91033,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91034,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91035,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91036,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91038,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+91040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+91041,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91042,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91043,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91044,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91045,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91047,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+91049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+91050,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91051,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91052,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91053,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91054,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91056,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91057,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+91058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+91059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+91060,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91061,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+91062,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91063,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+91064,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91065,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91066,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+91068,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+91069,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91070,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+91071,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91072,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+91073,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91074,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91075,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91076,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+91077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+91078,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91079,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+91080,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91081,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+91082,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91083,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91084,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+91086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+91087,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91088,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+91089,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91090,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+91091,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91093,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+91095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+91096,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91097,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+91098,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91099,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+91100,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91102,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+91104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+91105,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91106,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+91107,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91108,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+91109,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+91113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+91114,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91115,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+91116,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91117,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+91118,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+91122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+91123,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91124,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+91125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91126,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+91127,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+91131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+91132,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91133,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+91134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91135,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+91136,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+91140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+91141,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91142,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91144,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91145,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+91149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+91150,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91151,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91153,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91154,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+91158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+91159,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91160,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91162,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91163,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+91167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+91168,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91169,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91171,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91172,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+91176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+91177,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91178,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91180,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91181,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+91185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+91186,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91187,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91189,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91190,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+91194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+91195,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91196,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91198,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91199,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91201,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91202,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+91203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+91204,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+91205,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91206,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+91207,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91208,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+91209,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91210,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91211,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+91213,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+91214,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91215,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+91216,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91217,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+91218,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91219,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91220,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+91222,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+91223,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91224,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+91225,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91226,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+91227,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91229,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+91231,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+91232,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91233,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+91234,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91235,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+91236,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91238,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91239,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+91240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+91241,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91242,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+91243,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91244,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+91245,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91247,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+91249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+91250,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91251,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+91252,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91253,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+91254,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91256,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+91258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+91259,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91260,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+91261,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91262,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+91263,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91265,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+91267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+91268,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91269,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+91270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91271,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+91272,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+91276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+91277,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91278,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+91279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91280,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+91281,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+91285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+91286,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91287,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91289,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91290,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+91294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+91295,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91296,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91298,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91299,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+91303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+91304,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91305,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91307,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91308,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+91312,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+91313,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91314,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91316,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91317,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91320,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+91321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+91322,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91323,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91325,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91326,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+91330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+91331,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91332,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91334,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91335,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+91339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+91340,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91341,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91343,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91347,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+91348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+91349,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+91350,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91351,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+91352,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91353,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+91354,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91356,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+91358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+91359,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91360,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+91361,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91362,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+91363,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91365,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+91367,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+91368,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91369,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+91370,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91371,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+91372,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91374,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+91376,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+91377,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91378,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+91379,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91380,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+91381,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91383,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+91385,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+91386,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91387,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+91388,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91389,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+91390,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91392,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91393,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+91394,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+91395,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91396,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+91397,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91398,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+91399,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91401,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+91403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+91404,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91405,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+91406,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91407,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+91408,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91410,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+91412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+91413,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91414,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+91415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91416,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+91417,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+91421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+91422,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91423,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+91424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91425,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+91426,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+91430,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+91431,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91432,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91434,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+91435,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+91439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+91440,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91441,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91443,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+91444,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+91448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+91449,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91450,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91452,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+91453,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+91457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+91458,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91459,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91461,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+91462,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+91466,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+91467,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91468,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91470,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+91471,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+91475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+91476,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91477,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91479,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+91480,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+91483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+91484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+91485,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+91486,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+91487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_15))
                                                    : 0U)))),8);
    }
}
