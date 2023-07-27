// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgSub17(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 83744);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+2,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+3,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9))
                                   : 0U)),4);
        tracep->chgCData(oldp+4,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9))
                                               : 0U)))),8);
        tracep->chgCData(oldp+5,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9))
                                   : 0U)),4);
        tracep->chgCData(oldp+6,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+7,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+8,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_9) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_9) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+9,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+10,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+11,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+12,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10))
                                    : 0U)),4);
        tracep->chgCData(oldp+13,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10))
                                                : 0U)))),8);
        tracep->chgCData(oldp+14,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10))
                                    : 0U)),4);
        tracep->chgCData(oldp+15,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+16,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+17,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_10) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+18,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+19,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+20,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+21,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11))
                                    : 0U)),4);
        tracep->chgCData(oldp+22,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11))
                                                : 0U)))),8);
        tracep->chgCData(oldp+23,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11))
                                    : 0U)),4);
        tracep->chgCData(oldp+24,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+25,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+26,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_11) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+27,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+28,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+29,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+30,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12))
                                    : 0U)),4);
        tracep->chgCData(oldp+31,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12))
                                                : 0U)))),8);
        tracep->chgCData(oldp+32,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12))
                                    : 0U)),4);
        tracep->chgCData(oldp+33,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+34,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+35,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_12) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+36,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+37,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+38,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+39,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13))
                                    : 0U)),4);
        tracep->chgCData(oldp+40,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13))
                                                : 0U)))),8);
        tracep->chgCData(oldp+41,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13))
                                    : 0U)),4);
        tracep->chgCData(oldp+42,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+43,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+44,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_13) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+45,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+46,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+47,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+48,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+49,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14))
                                                : 0U)))),8);
        tracep->chgCData(oldp+50,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+51,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+52,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+53,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+54,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+55,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+56,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+57,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+58,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15))
                                                : 0U)))),8);
        tracep->chgCData(oldp+59,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+60,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+61,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+62,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_hor_r_man_15) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+63,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_11.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_11.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_11.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_11.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+64,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+65,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+66,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+67,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0))
                                    : 0U)),4);
        tracep->chgCData(oldp+68,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0))
                                                : 0U)))),8);
        tracep->chgCData(oldp+69,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0))
                                    : 0U)),4);
        tracep->chgCData(oldp+70,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+71,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+72,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_0) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+73,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+74,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+75,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+76,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1))
                                    : 0U)),4);
        tracep->chgCData(oldp+77,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1))
                                                : 0U)))),8);
        tracep->chgCData(oldp+78,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1))
                                    : 0U)),4);
        tracep->chgCData(oldp+79,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+80,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+81,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_1) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+82,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+83,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+84,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+85,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2))
                                    : 0U)),4);
        tracep->chgCData(oldp+86,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2))
                                                : 0U)))),8);
        tracep->chgCData(oldp+87,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2))
                                    : 0U)),4);
        tracep->chgCData(oldp+88,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+89,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+90,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_2) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+91,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+92,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+93,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+94,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3))
                                    : 0U)),4);
        tracep->chgCData(oldp+95,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3))
                                                : 0U)))),8);
        tracep->chgCData(oldp+96,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3))
                                    : 0U)),4);
        tracep->chgCData(oldp+97,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+98,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+99,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_3) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+100,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+101,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+102,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+103,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+104,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+105,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+106,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+107,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+108,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+109,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+111,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+112,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+113,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+114,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+115,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+116,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+117,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+119,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+120,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+121,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+122,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+123,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+124,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+126,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+128,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+129,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+130,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+131,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+132,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+133,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+135,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+136,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+137,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+138,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+139,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+140,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+141,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+142,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+144,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+145,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+146,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+147,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+148,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+149,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+150,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+151,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+153,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+154,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+156,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+157,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+158,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+159,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+160,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+162,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+165,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+166,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+168,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+169,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+171,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+173,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+174,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+175,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+177,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+178,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+180,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+181,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+182,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+183,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+184,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+186,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+187,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+189,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+190,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+192,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+193,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+195,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+196,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+198,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+201,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+202,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+204,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+205,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+207,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_11_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+208,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_12.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_12.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+209,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+210,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+211,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+212,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+213,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+214,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+215,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+216,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+217,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+218,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+219,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+220,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+221,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+222,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+223,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+224,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+225,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+226,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+227,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+228,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+229,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+230,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+232,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+233,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+234,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+235,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+237,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+238,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+239,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+241,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+242,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+243,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+244,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+246,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+247,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+248,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+250,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+251,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+252,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+253,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+255,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+256,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+257,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+259,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+260,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+261,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+262,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+263,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+264,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+265,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+266,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+268,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+269,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+271,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+272,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+273,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+274,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+275,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+277,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+278,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+280,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+282,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+283,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+284,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+286,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+287,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+289,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+291,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+292,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+293,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+295,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+296,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+298,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+299,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+300,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+301,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+302,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+304,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+305,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+307,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+308,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+310,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+311,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+313,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+314,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+316,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+318,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+319,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+320,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+322,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+323,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+325,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+327,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+328,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+329,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+331,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+332,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+334,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+336,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+337,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+338,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+340,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+341,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+343,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+344,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+345,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+346,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+347,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+349,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+350,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+352,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_12_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+353,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_13.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_13.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+355,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+356,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+357,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+358,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+359,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+360,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+361,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+362,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+364,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+365,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+366,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+367,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+368,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+369,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+370,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+371,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+372,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+373,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+374,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+375,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+377,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+378,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+379,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+380,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+381,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+382,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+383,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+384,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+386,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+387,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+388,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+389,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+390,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+391,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+392,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+393,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+395,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+396,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+397,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+398,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+400,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+401,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+402,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+404,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+405,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+406,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+407,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+408,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+409,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+410,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+411,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+413,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+414,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+416,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+417,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+418,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+419,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+420,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+422,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+423,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+425,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+426,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+427,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+428,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+429,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+431,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+432,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+434,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+436,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+437,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+438,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+440,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+441,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+443,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+444,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+445,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+446,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+447,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+449,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+450,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+452,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+454,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+455,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+456,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+458,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+459,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+461,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+462,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+463,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+464,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+465,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+467,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+468,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+470,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+472,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+473,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+474,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+476,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+477,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+479,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+481,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+482,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+483,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+485,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+486,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+488,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+490,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+491,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+492,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+494,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+495,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+497,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_13_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+498,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_14.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_14.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+499,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+500,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+501,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+502,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+503,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+504,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+505,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+506,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+507,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+509,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+510,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+511,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+512,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+513,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+514,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+515,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+516,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+517,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+518,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+519,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+520,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+522,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+523,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+524,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+525,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+526,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+527,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+528,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+529,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+531,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+532,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+533,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+534,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+535,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+536,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+537,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+538,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+540,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+541,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+542,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+543,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+544,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+546,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+547,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+549,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+550,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+551,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+552,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+553,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+554,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+555,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+556,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+557,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+558,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+559,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+560,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+561,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+562,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+563,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+564,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+565,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+567,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+568,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+569,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+570,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+571,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+572,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+573,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+574,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+575,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+576,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+577,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+578,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+579,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+580,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+581,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+582,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+583,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+584,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+585,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+586,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+587,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+588,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+589,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+590,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+591,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+592,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+594,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+595,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+596,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+597,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+598,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+599,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+600,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+601,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+603,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+604,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+605,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+606,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+608,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+609,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+610,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+612,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+613,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+614,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+615,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+616,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+617,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+618,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+619,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+621,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+622,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+623,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+624,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+625,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+626,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+627,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+628,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+630,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+631,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+633,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+636,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+637,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+638,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+639,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+640,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+642,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_14_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+643,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_15.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_15.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+644,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+645,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+646,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+647,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+648,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+649,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+650,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+651,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+652,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+653,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+654,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+655,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+656,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+657,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+658,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+659,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+660,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+661,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+662,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+663,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+664,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+665,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+666,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+667,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+668,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+669,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+670,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+671,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+672,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+673,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+674,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+675,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+676,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+677,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+678,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+679,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+681,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+682,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+683,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+685,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+686,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+687,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+688,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+689,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+690,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+691,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+692,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+693,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+694,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+695,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+696,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+697,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+698,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+699,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+700,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+701,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+703,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+704,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+705,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+706,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+707,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+708,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+709,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+710,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+711,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+712,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+713,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+714,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+715,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+716,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+717,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+718,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+719,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+721,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+722,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+723,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+724,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+726,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+727,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+728,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+729,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+730,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+731,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+732,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+733,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+734,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+735,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+736,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+737,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+738,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+739,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+740,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+741,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+742,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+743,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+744,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+745,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+746,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+748,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+749,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+750,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+751,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+752,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+754,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+755,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+757,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+758,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+759,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+760,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+762,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+763,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+764,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+766,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+767,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+768,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+769,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+771,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+772,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+773,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+774,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+775,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+776,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+777,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+778,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+779,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+780,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+781,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+782,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+784,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+785,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+787,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_15_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+788,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_0.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+789,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+791,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+792,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+793,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+794,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+795,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+796,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+797,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+798,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+799,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+800,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+801,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+802,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+803,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+804,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+805,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+806,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+807,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+808,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+809,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+810,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+812,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+813,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+814,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+815,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+816,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+817,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+818,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+819,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+820,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+821,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+822,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+823,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+824,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+825,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+826,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+827,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+828,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+829,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+830,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+831,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+832,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+833,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+834,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+835,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+836,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+837,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+839,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+840,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+841,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+842,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+843,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+844,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+845,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+846,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+847,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+848,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+849,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+850,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+851,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+852,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+853,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+854,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+855,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+857,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+858,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+859,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+860,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+861,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8)))),4);
        tracep->chgCData(oldp+862,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+863,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+864,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+865,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+866,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+867,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+868,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+869,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+870,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9)))),4);
        tracep->chgCData(oldp+871,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+872,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+873,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+875,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+876,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+877,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+878,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+879,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10)))),4);
        tracep->chgCData(oldp+880,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+881,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+882,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+883,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+884,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+885,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+886,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+887,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+888,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11)))),4);
        tracep->chgCData(oldp+889,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+890,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+891,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+892,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+893,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+894,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+895,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+896,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+897,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12)))),4);
        tracep->chgCData(oldp+898,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+899,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+900,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+902,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+903,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+904,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+905,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+906,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13)))),4);
        tracep->chgCData(oldp+907,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+908,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+909,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+910,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+911,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+912,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+913,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+914,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14)))),4);
        tracep->chgCData(oldp+916,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+917,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+918,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+919,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+920,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+921,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+922,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+923,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15)))),4);
        tracep->chgCData(oldp+925,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+926,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+927,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+928,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+929,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+930,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+931,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+932,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_hor_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_0_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+933,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+934,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+935,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+936,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+937,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+938,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+939,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+940,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+941,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+942,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+943,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+945,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+946,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+948,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+949,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+950,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+951,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+953,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+954,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+955,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+957,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+958,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+959,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+960,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+961,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+962,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+963,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+964,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+966,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+967,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+968,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+969,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+970,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+971,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+972,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+973,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+975,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+976,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+977,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+978,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+979,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+981,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+982,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+984,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+985,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+986,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+987,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+988,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+990,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+991,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+993,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+994,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+995,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+996,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+997,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+999,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+1000,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1002,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1003,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1004,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1005,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1006,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1007,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1008,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1009,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1011,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1012,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1013,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1014,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1015,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1017,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1018,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1020,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1021,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1022,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1023,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1024,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1026,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1027,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1029,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1030,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1031,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1032,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1033,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1035,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1036,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1038,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1039,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1040,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1041,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1043,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1044,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1045,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1047,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1048,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1049,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1050,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1051,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1052,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1053,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1054,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1056,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1057,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1058,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1059,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1060,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1062,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1063,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1064,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1065,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1066,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1067,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1068,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1071,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1072,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1073,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1074,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1075,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1076,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1077,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_1_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1078,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_2.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1079,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1080,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1081,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1082,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1083,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1084,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1085,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1086,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1087,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1088,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1090,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1091,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1093,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1094,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1095,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1096,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1097,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1099,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1100,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1102,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1103,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1104,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1105,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1108,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1109,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1111,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1112,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1113,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1114,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1117,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1118,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1120,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1121,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1122,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1123,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1126,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1127,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1129,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1130,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1131,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1132,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1133,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1135,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1136,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1138,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1139,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1140,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1141,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1144,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1145,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1147,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1148,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1149,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1150,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1153,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1154,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1156,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1157,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1158,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1159,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1162,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1163,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1165,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1166,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1168,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1169,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1171,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1172,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1174,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1175,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1177,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1178,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1180,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1181,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1183,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1184,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1186,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1189,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1190,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1192,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1193,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1195,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1198,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1199,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1201,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1202,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1204,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1206,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1207,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1208,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1210,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1211,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1212,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1213,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1214,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1216,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1217,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1218,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1219,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1220,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1221,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1222,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_2_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1223,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_3.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1226,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1227,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1229,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1230,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1232,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1235,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1236,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1238,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1239,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1241,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1243,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1244,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1245,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1247,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1248,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1250,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1251,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1253,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1254,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1256,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1257,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1259,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1262,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1263,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1265,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1266,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1268,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1271,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1272,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1274,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1275,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1277,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1280,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1281,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1283,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1284,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1286,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1289,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1290,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1292,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1293,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1295,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1298,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1299,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1301,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1302,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1304,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1307,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1308,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1310,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1311,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1313,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1316,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1317,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1319,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1320,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1322,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1324,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1325,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1326,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1328,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1329,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1331,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1332,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1334,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1335,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1337,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1338,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1340,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1343,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1344,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1346,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1347,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1349,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1352,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1353,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1355,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1356,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1358,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1360,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1361,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1362,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1364,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1365,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1367,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_3_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1368,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_4.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1369,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1371,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1372,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1374,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1375,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1377,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1380,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1381,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1383,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1384,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1386,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1389,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1390,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1392,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1393,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1395,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1397,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1398,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1399,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1401,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1402,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1404,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1407,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1408,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1410,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1411,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1413,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1416,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1417,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1419,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1420,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1422,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1425,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1426,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1428,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1429,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1431,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1434,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1435,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1437,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1438,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1440,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1443,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1444,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1446,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1447,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1449,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1452,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1453,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1455,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1456,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1458,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1461,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1462,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1464,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1465,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1467,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1470,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1471,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1473,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1474,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1476,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1479,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1480,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1482,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1483,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1485,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1488,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1489,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1491,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1492,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1494,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1497,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1498,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1500,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1501,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1503,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1506,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1507,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1509,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1510,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1512,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_4_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1513,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_5.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1515,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1516,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1517,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1519,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1520,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1522,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1525,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1526,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1528,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1529,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1531,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1534,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1535,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1537,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1538,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1540,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1543,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1544,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1546,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1547,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_5_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
    }
}
