// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub27(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+99229,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99230,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99232,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+99233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+99234,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99235,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99236,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99237,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99238,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99239,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+99242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+99243,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99244,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99245,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99246,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99247,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99248,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99250,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+99251,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+99252,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99253,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99254,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99255,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99256,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99257,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99259,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+99260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+99261,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99262,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99263,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99264,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99265,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99266,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99268,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+99269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+99270,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99271,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99272,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99273,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99274,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99275,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99277,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+99278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+99279,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99280,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99281,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99282,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99283,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99284,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99286,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+99287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+99288,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99289,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99290,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99291,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99292,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99293,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99295,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+99296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+99297,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99298,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99299,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99300,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99301,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99302,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99304,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+99305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+99306,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99307,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99308,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99309,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99310,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99311,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99313,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+99314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+99315,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99316,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99317,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99318,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99319,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99320,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99322,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+99324,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+99325,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99326,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99328,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99329,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99331,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99332,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+99333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+99334,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99335,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99337,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99338,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99340,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+99342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+99343,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99344,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99346,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99347,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99349,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+99351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+99352,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99353,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99355,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99356,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99358,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+99360,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+99361,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99362,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99364,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99365,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99367,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+99369,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+99370,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99371,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99373,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99374,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99375,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99377,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+99378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+99379,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99380,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99382,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99383,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99384,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+99387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+99388,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99389,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99391,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99392,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99393,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+99396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+99397,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99398,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99399,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99400,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99401,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99402,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99404,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+99405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+99406,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99407,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99408,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99409,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99410,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99411,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99413,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+99414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+99415,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99416,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99417,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99418,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99419,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99420,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99422,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+99423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+99424,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99425,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99426,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99427,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99428,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99429,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99431,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+99432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+99433,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99434,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99435,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99436,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99437,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99438,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+99441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+99442,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99443,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99444,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99445,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99446,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99447,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+99450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+99451,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99452,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99453,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99454,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99455,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99456,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99458,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+99459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+99460,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99461,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99462,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99463,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99464,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99465,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99467,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+99469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+99470,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99471,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99473,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99474,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99476,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+99478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+99479,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99480,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99482,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99483,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99485,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+99487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+99488,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99489,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99491,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99492,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99494,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+99496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+99497,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99498,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99500,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99501,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99503,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+99505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+99506,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99507,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99509,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99510,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99512,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+99514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+99515,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99516,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99518,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99519,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99520,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+99523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+99524,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99525,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99527,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99528,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99529,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99531,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+99532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+99533,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99534,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99536,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99537,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99538,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99540,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+99541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+99542,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99543,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99544,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99545,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99546,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99547,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99549,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+99550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+99551,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99552,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99553,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99554,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99555,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99556,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99557,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99558,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+99559,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+99560,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99561,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99562,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99563,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99564,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99565,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99567,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+99568,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+99569,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99570,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99571,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99572,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99573,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99574,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99575,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99576,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+99577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+99578,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99579,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99580,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99581,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99582,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99583,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99584,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99585,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+99586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+99587,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99588,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99589,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99590,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99591,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99592,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99594,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+99595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+99596,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99597,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99598,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99599,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99600,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99601,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99603,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+99604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+99605,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99606,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99607,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99608,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99609,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99610,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99612,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99613,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+99614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+99615,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99616,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99618,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99619,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99621,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+99623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+99624,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99625,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99626,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99627,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99628,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99630,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+99632,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+99633,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99634,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99636,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99637,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99638,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99639,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+99641,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+99642,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99643,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99644,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99645,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99646,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99647,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99648,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99649,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+99650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+99651,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99652,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99654,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99655,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99656,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99657,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99658,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+99659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+99660,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99661,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99663,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99664,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99665,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99666,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99667,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+99668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+99669,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99670,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99672,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99673,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99674,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99675,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+99677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+99678,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99679,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99680,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99681,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99682,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99683,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99685,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+99686,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+99687,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99688,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99689,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99690,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99691,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99692,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99693,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99694,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+99695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+99696,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99697,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99698,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99699,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99700,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99701,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99703,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+99704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+99705,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99706,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99707,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99708,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99709,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99710,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99711,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99712,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+99713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+99714,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99715,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99716,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99717,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99718,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99719,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99721,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+99722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+99723,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99724,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99725,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99726,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99727,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99728,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99729,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99730,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+99731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+99732,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99733,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99734,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99735,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99736,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99737,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99738,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99739,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+99740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+99741,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99742,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99743,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99744,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99745,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99746,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99748,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+99749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+99750,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99751,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99752,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99753,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99754,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99755,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99757,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+99759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+99760,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99761,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99763,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99764,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99766,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99767,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+99768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+99769,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99770,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99772,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99773,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99774,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99775,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+99777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+99778,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99779,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99780,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99781,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99782,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99784,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+99786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+99787,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99788,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99790,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99791,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99792,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99793,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+99795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+99796,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99797,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99798,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99799,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99800,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99801,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99802,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+99804,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+99805,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99806,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99808,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99809,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99810,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99812,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+99813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+99814,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99815,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99816,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99817,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99818,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99819,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99820,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+99822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+99823,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99824,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99825,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99826,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99827,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99828,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99829,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+99831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+99832,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99833,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99834,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99835,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99836,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99837,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99839,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+99840,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+99841,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99842,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99843,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99844,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99845,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99846,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99847,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99848,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+99849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+99850,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99851,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99852,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99853,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99854,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99855,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99857,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+99858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+99859,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99860,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99861,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99862,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+99863,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99864,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99865,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99866,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+99867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+99868,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99869,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99870,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99871,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+99872,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99873,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+99876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+99877,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99878,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99879,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99880,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+99881,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99882,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99883,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99884,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+99885,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+99886,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99887,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99888,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99889,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+99890,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99891,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99892,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99893,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+99894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+99895,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99896,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99897,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99898,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+99899,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99900,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99902,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+99903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+99904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+99905,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99906,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99907,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99908,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+99909,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99910,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99911,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+99913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+99914,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99915,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99917,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+99918,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99919,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99920,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99921,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+99922,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+99923,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99924,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99925,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99926,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+99927,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99928,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99929,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99930,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+99931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+99932,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99933,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99934,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99935,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+99936,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99937,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99938,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+99940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+99941,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99942,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99943,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99944,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+99945,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99946,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+99949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+99950,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99951,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99952,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99953,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+99954,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99955,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99957,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+99958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+99959,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99960,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99961,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99962,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+99963,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99964,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99966,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+99967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+99968,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99969,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99970,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99971,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+99972,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99973,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99975,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+99976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+99977,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99978,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99979,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99980,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+99981,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99982,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99984,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+99985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+99986,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99987,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99988,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99989,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+99990,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99991,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99993,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+99994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+99995,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+99996,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99997,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+99998,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+99999,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+100000,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100002,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+100003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+100004,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100005,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100006,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100007,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100008,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100009,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100011,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+100012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+100013,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100014,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100015,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100016,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100017,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100018,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100020,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+100021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+100022,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100023,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100024,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100025,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100026,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100027,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100029,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+100030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+100031,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100032,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100033,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100034,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100035,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100036,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100038,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+100039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+100040,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100041,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100042,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100043,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100044,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100045,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100047,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+100049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+100050,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100051,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100052,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100053,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100054,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100056,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+100058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+100059,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100060,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100061,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100062,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100063,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100064,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100065,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+100067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+100068,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100069,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100070,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100071,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100072,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100073,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100074,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+100076,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+100077,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100078,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100079,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100080,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100081,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100082,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100083,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100084,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+100085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+100086,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100087,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100088,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100089,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100090,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100091,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100093,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+100094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+100095,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100096,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100097,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100098,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100099,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100100,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+100103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+100104,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100105,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100106,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100107,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100108,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100109,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+100112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+100113,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100114,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100115,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100116,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100117,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100118,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100120,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+100121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+100122,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100123,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100124,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100125,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100126,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100127,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100129,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+100130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+100131,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100132,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100133,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100134,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100135,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100136,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100138,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+100139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+100140,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100141,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100142,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100143,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100144,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100145,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100147,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+100148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+100149,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100150,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100151,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100152,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100153,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100154,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100156,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+100157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+100158,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100159,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100160,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100161,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100162,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100163,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100165,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+100166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+100167,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100168,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100169,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100170,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100171,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100172,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100174,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+100175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+100176,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100177,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100178,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100179,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100180,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100181,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100183,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+100184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+100185,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100186,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100187,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100188,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100189,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100190,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_11_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100192,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+100194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+100195,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100196,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100198,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100199,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100201,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100202,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+100203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+100204,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100205,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100207,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100208,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100210,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100211,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+100212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+100213,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100214,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100216,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100217,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100218,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100219,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+100221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+100222,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100223,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100225,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100226,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100227,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+100230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+100231,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100232,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100233,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100234,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100235,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100236,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100238,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+100239,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+100240,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100241,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100242,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100243,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100244,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100245,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100247,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+100248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+100249,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100250,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100251,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100252,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100253,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100254,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100256,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+100257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+100258,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100259,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100260,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100261,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100262,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100263,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100265,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+100266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+100267,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100268,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100269,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100270,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100271,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100272,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100274,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+100275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+100276,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100277,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100278,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100279,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100280,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100281,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100283,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+100284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+100285,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100286,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100287,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100288,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100289,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100290,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100292,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+100293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+100294,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100295,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100296,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100297,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100298,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100299,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100301,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+100302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+100303,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100304,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100305,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100306,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100307,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100308,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100310,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+100311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+100312,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100313,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100314,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100315,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100316,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100317,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100319,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+100320,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+100321,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100322,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100323,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100324,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100325,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100326,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100328,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+100329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+100330,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100331,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100332,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100333,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100334,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100335,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_12_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100337,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+100339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+100340,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100341,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100343,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100344,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+100348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+100349,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100350,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100352,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100353,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100356,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+100357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+100358,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100359,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100361,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100362,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100365,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+100366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+100367,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100368,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100370,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100371,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+100375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+100376,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100377,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100379,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100380,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+100384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+100385,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100386,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100388,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100389,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+100393,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+100394,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100395,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100396,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100397,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100398,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100399,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100401,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+100402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+100403,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100404,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100405,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100406,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100407,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100408,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100410,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+100411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+100412,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100413,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100414,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100415,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100416,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100417,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100419,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+100420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+100421,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100422,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100423,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100424,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100425,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100426,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100428,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+100429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+100430,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100431,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100432,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100433,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100434,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100435,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100437,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+100438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+100439,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100440,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100441,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100442,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100443,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100444,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100446,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+100447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+100448,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100449,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100450,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100451,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100452,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100453,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100455,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+100456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+100457,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100458,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100459,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100460,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100461,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100462,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100464,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+100465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+100466,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100467,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100468,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100469,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100470,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100471,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100473,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+100474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+100475,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100476,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100477,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100478,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100479,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100480,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_13_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100482,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+100484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+100485,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100486,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100488,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100489,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100491,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+100493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+100494,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100495,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100497,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100498,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100500,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+100502,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+100503,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100504,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100506,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100507,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100509,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+100511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+100512,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100513,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100515,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100516,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100519,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+100520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+100521,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100522,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100524,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100525,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+100529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+100530,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100531,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100533,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100534,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+100538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+100539,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100540,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100542,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100543,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100544,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100546,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+100547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+100548,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100549,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100550,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100551,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100552,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100553,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100555,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+100556,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+100557,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100558,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100559,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100560,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100561,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100562,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100564,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+100565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+100566,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100567,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100568,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100569,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100570,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100571,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100573,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+100574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+100575,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100576,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100577,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100578,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100579,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100580,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100582,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+100583,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+100584,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100585,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100586,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100587,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100588,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100589,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100591,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+100592,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+100593,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100594,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100595,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100596,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100597,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100598,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100599,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100600,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+100601,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+100602,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100603,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100604,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100605,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100606,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100607,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100609,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+100610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+100611,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100612,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100613,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100614,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100615,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100616,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100618,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+100619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+100620,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100621,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100622,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100623,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100624,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100625,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100626,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_14_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100627,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_14_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100628,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+100629,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+100630,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100631,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100633,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+100634,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100636,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100637,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+100638,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+100639,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100640,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100642,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+100643,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100644,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100645,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100646,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+100647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+100648,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100649,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100650,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100651,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+100652,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100654,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+100656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+100657,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100658,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100659,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100660,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+100661,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100663,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100664,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+100665,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+100666,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100667,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100668,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100669,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+100670,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100672,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100673,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+100674,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+100675,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100676,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100677,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100678,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+100679,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100680,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100681,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100682,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+100683,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+100684,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100685,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100686,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100687,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+100688,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100689,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100690,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100691,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+100692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+100693,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100694,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100695,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100696,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+100697,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100698,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+100701,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+100702,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100703,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100704,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100705,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+100706,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100707,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100708,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+100710,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+100711,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100712,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100713,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100714,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+100715,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100716,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100717,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100718,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+100719,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+100720,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100721,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100722,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100723,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+100724,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100725,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100727,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+100728,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+100729,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100730,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100731,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100732,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+100733,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100734,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100735,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100736,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+100737,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+100738,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100739,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100740,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100741,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+100742,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100743,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100745,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+100746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+100747,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100748,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100749,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100750,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+100751,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100752,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100753,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100754,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+100755,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+100756,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100757,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100758,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100759,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+100760,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100761,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100763,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+100764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+100765,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100766,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100767,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100768,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+100769,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100770,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_14_15_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+100772,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_0.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+100773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_0_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+100774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_0_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_0_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+100775,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_0_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+100776,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_0_io_in_ver_r_man_0))
                                         : 0U)),4);
    }
}
