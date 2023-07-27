// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgSub14(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 79101);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_8) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+1,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_8))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_8) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+2,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_8) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_8) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+3,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+4,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+5,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+6,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9))
                                   : 0U)),4);
        tracep->chgCData(oldp+7,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9))
                                               : 0U)))),8);
        tracep->chgCData(oldp+8,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9))
                                   : 0U)),4);
        tracep->chgCData(oldp+9,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+10,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+11,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_9) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+12,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+13,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+14,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+15,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10))
                                    : 0U)),4);
        tracep->chgCData(oldp+16,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10))
                                                : 0U)))),8);
        tracep->chgCData(oldp+17,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10))
                                    : 0U)),4);
        tracep->chgCData(oldp+18,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+19,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+20,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_10) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+21,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+22,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+23,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+24,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11))
                                    : 0U)),4);
        tracep->chgCData(oldp+25,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11))
                                                : 0U)))),8);
        tracep->chgCData(oldp+26,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11))
                                    : 0U)),4);
        tracep->chgCData(oldp+27,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+28,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+29,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_11) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+30,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+31,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+32,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+33,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12))
                                    : 0U)),4);
        tracep->chgCData(oldp+34,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12))
                                                : 0U)))),8);
        tracep->chgCData(oldp+35,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12))
                                    : 0U)),4);
        tracep->chgCData(oldp+36,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+37,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+38,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_12) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+39,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+40,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+41,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+42,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13))
                                    : 0U)),4);
        tracep->chgCData(oldp+43,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13))
                                                : 0U)))),8);
        tracep->chgCData(oldp+44,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13))
                                    : 0U)),4);
        tracep->chgCData(oldp+45,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+46,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+47,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_13) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+48,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+49,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+50,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+51,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+52,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14))
                                                : 0U)))),8);
        tracep->chgCData(oldp+53,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+54,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+55,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+56,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+57,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+58,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+59,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+60,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+61,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15))
                                                : 0U)))),8);
        tracep->chgCData(oldp+62,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+63,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+64,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+65,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_hor_r_man_15) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+66,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_11.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_11.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_11.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_11.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+67,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+68,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+69,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+70,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0))
                                    : 0U)),4);
        tracep->chgCData(oldp+71,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0))
                                                : 0U)))),8);
        tracep->chgCData(oldp+72,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0))
                                    : 0U)),4);
        tracep->chgCData(oldp+73,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+74,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+75,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_0) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+76,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+77,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+78,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+79,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1))
                                    : 0U)),4);
        tracep->chgCData(oldp+80,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1))
                                                : 0U)))),8);
        tracep->chgCData(oldp+81,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1))
                                    : 0U)),4);
        tracep->chgCData(oldp+82,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+83,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+84,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_1) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+85,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+86,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+87,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+88,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2))
                                    : 0U)),4);
        tracep->chgCData(oldp+89,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2))
                                                : 0U)))),8);
        tracep->chgCData(oldp+90,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2))
                                    : 0U)),4);
        tracep->chgCData(oldp+91,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+92,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+93,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_2) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+94,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+95,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+96,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+97,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3))
                                    : 0U)),4);
        tracep->chgCData(oldp+98,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3))
                                                : 0U)))),8);
        tracep->chgCData(oldp+99,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3))
                                    : 0U)),4);
        tracep->chgCData(oldp+100,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+102,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+105,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+106,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+107,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+108,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+109,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+114,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+115,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+116,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+117,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+118,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+123,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+124,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+126,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+127,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+132,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+133,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+135,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+136,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+141,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+142,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+144,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+145,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+150,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+151,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+153,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+154,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+159,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+160,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+162,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+163,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+168,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+169,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+171,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+172,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+177,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+178,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+180,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+181,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+186,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+187,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+189,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+190,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+195,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+196,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+198,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+199,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+201,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+202,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+204,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+205,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+207,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+208,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+210,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_11_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+211,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_12.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_12.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+213,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+214,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+215,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+216,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+217,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+218,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+219,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+220,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+222,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+223,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+224,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+225,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+226,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+227,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+229,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+231,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+232,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+233,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+234,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+235,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+236,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+238,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+239,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+241,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+242,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+243,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+244,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+245,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+247,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+250,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+251,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+252,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+253,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+254,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+256,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+259,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+260,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+261,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+262,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+263,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+265,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+268,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+269,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+271,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+272,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+277,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+278,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+280,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+281,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+286,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+287,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+289,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+290,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+295,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+296,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+298,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+299,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+304,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+305,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+307,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+308,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+312,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+313,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+314,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+316,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+317,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+320,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+322,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+323,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+325,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+326,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+331,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+332,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+334,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+335,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+340,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+341,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+343,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+344,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+349,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+350,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+352,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+353,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_12_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+356,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_13.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_13.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+359,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+360,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+361,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+362,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+363,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+365,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+367,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+368,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+369,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+370,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+371,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+372,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+374,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+376,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+377,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+378,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+379,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+380,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+381,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+383,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+385,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+386,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+387,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+388,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+389,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+390,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+392,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+393,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+394,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+395,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+396,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+397,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+398,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+399,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+401,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+404,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+405,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+406,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+407,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+408,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+410,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+413,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+414,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+416,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+417,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+422,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+423,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+425,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+426,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+430,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+431,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+432,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+434,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+435,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+440,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+441,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+443,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+444,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+449,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+450,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+452,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+453,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+458,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+459,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+461,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+462,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+466,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+467,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+468,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+470,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+471,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+476,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+477,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+479,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+480,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+485,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+486,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+488,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+489,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+491,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+494,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+495,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+497,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+498,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+500,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_13_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+501,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_14.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_14.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+502,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+503,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+504,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+505,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+506,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+507,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+508,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+509,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+510,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+512,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+513,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+514,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+515,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+516,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+517,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+519,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+521,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+522,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+523,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+524,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+525,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+526,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+528,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+530,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+531,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+532,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+533,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+534,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+535,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+537,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+539,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+540,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+541,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+542,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+543,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+544,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+546,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+548,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+549,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+550,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+551,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+552,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+553,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+555,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+556,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+557,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+558,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+559,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+560,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+561,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+562,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+564,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+566,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+567,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+568,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+569,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+570,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+571,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+573,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+575,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+576,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+577,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+578,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+579,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+580,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+582,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+583,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+584,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+585,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+586,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+587,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+588,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+589,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+591,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+592,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+593,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+594,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+595,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+596,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+597,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+598,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+599,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+600,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+601,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+602,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+603,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+604,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+605,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+606,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+607,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+609,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+611,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+612,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+613,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+614,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+615,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+616,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+618,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+620,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+621,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+622,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+623,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+624,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+625,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+626,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+627,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+628,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+629,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+630,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+631,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+633,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+634,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+636,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+637,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+638,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+639,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+640,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+642,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+643,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+644,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+645,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_14_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+646,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_15.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_15.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+648,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+649,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+650,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+651,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+652,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+653,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+654,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+655,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+657,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+658,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+659,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+660,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+661,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+662,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+663,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+664,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+665,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+666,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+667,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+668,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+669,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+670,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+671,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+672,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+673,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+674,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+675,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+676,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+677,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+678,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+679,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+680,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+681,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+682,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+683,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+684,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+685,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+686,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+687,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+688,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+689,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+690,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+691,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+693,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+694,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+695,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+696,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+697,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+698,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+700,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+701,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+702,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+703,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+704,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+705,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+706,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+707,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+708,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+709,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+710,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+711,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+712,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+713,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+714,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+715,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+716,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+717,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+718,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+719,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+720,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+721,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+722,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+723,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+724,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+725,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+727,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+728,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+729,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+730,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+731,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+732,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+733,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+734,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+735,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+736,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+737,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+738,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+739,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+740,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+741,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+742,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+743,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+745,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+747,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+748,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+749,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+750,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+751,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+752,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+753,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+754,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+755,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+756,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+757,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+758,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+759,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+760,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+761,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+763,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+766,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+767,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+768,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+769,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+770,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+772,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+775,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+776,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+777,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+778,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+779,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+780,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+781,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+783,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+784,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+785,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+787,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+788,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+790,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_15_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+791,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+792,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+793,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+794,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+795,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+796,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+797,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+798,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+799,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+800,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+801,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+802,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+803,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+804,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+805,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+806,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+807,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+808,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+809,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+810,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+811,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+812,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+813,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+814,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+815,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+816,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+817,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+818,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+819,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+820,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+821,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+822,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+823,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+824,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+825,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+826,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+827,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+828,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+829,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+830,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+831,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+832,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+833,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+834,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+835,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+836,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+837,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+838,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+839,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+840,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+841,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+842,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+843,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+844,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+845,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+846,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+847,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+848,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+849,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+850,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+851,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+852,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+853,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+854,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+856,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+857,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+858,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+859,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+860,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+861,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+862,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+863,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+864,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8)))),4);
        tracep->chgCData(oldp+865,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+866,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+867,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+868,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+869,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+870,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+871,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+872,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+873,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9)))),4);
        tracep->chgCData(oldp+874,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+875,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+876,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+877,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+878,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+879,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+880,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+881,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+882,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10)))),4);
        tracep->chgCData(oldp+883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+884,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+885,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+886,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+887,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+888,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+889,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+890,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11)))),4);
        tracep->chgCData(oldp+892,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+893,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+894,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+895,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+896,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+897,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+898,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+899,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12)))),4);
        tracep->chgCData(oldp+901,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+902,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+903,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+904,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+905,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+906,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+907,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+908,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+909,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13)))),4);
        tracep->chgCData(oldp+910,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+911,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+912,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+913,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+914,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+915,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+917,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+918,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14)))),4);
        tracep->chgCData(oldp+919,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+920,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+921,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+922,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+923,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+924,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+925,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+926,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15)))),4);
        tracep->chgCData(oldp+928,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+929,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+930,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+931,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+932,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+933,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+934,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+935,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+936,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+938,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+939,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+940,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+941,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+942,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+943,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+944,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+945,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+946,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+947,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+948,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+949,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+950,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+951,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+952,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+953,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+954,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+955,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+956,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+957,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+958,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+959,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+960,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+961,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+962,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+963,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+964,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+965,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+966,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+967,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+968,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+969,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+970,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+971,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+972,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+974,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+975,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+976,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+977,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+978,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+979,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+980,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+981,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+982,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+983,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+984,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+985,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+986,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+987,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+988,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+989,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+990,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+991,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+992,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+993,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+994,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+995,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+996,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+997,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+998,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+999,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+1000,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1001,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1002,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1003,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1004,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1005,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1006,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1007,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1008,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1009,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1010,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1011,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1012,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1013,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1014,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1015,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1016,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1017,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1018,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1019,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1020,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1021,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1022,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1023,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1024,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1025,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1026,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1027,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1028,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1029,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1030,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1031,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1032,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1033,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1034,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1035,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1036,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1037,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1038,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1039,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1040,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1041,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1042,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1043,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1044,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1046,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1047,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1048,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1049,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1050,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1051,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1052,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1053,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1054,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1055,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1056,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1057,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1058,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1059,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1060,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1061,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1062,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1063,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1064,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1065,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1066,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1067,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1068,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1069,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1070,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1071,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1072,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1073,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1074,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1075,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1076,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1077,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1078,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1079,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1080,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1081,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1083,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1084,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1085,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1086,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1087,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1088,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1089,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1090,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1091,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1092,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1093,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1094,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1095,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1096,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1097,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1098,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1099,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1100,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1101,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1102,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1103,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1104,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1105,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1106,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1107,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1108,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1109,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1111,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1112,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1113,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1114,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1115,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1116,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1117,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1119,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1120,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1121,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1122,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1123,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1124,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1126,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1128,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1129,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1130,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1131,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1132,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1133,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1135,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1136,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1137,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1138,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1139,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1140,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1141,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1142,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1144,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1145,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1146,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1147,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1148,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1149,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1150,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1151,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1153,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1154,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1156,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1157,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1158,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1159,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1160,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1162,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1165,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1166,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1168,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1169,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1171,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1173,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1174,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1175,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1177,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1178,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1180,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1181,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1182,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1183,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1184,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1186,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1187,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1189,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1190,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1192,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1193,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1195,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1196,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1198,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1201,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1202,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1204,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1205,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1207,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1209,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1210,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1211,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1212,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1213,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1214,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1216,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1218,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1219,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1220,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1221,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1222,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1223,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1225,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1226,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1227,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1228,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1229,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1230,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1232,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1233,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1234,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1235,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1237,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1238,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1239,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1241,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1242,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1243,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1244,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1246,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1247,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1248,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1250,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1251,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1252,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1253,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1255,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1256,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1257,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1259,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1260,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1261,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1262,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1263,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1264,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1265,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1266,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1268,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1269,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1271,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1272,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1273,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1274,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1275,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1277,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1278,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1280,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1282,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1283,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1284,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1286,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1287,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1289,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1291,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1292,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1293,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1295,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1296,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1298,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1299,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1300,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1301,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1302,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1304,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1305,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1307,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1308,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1310,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1311,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1313,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1314,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1316,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1318,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1319,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1320,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1322,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1323,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1325,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1327,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1328,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1329,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1331,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1332,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1334,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1336,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1337,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1338,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1340,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1341,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1343,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1344,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1345,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1346,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1347,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1349,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1350,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1352,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1353,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1355,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1356,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1358,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1359,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1361,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1364,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1365,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1367,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1368,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1370,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1371,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1372,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1373,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1374,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1375,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1377,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1378,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1379,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1380,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1381,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1382,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1383,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1384,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1386,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1387,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1388,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1389,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1390,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1391,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1392,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1393,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1395,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1396,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1397,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1398,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1400,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1401,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1402,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1404,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1405,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1406,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1407,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1408,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1409,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1410,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1411,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1413,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1414,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1416,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1417,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1418,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1419,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1420,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1422,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1423,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1425,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1426,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1427,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1428,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1429,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1431,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1432,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1434,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1436,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1437,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1438,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1440,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1441,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1443,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1444,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1445,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1446,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1447,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1449,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1450,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1452,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1454,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1455,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1456,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1458,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1459,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1461,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1462,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1463,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1464,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1465,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1467,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1468,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1470,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1472,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1473,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1474,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1476,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1477,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1479,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1481,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1482,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1483,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1485,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1486,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1488,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1490,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1491,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1492,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1494,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1495,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1497,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1498,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1499,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1500,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1501,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1503,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1504,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1506,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1507,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1509,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1510,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1512,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1513,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1515,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1516,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1517,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1518,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1519,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1520,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1522,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1523,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1524,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1525,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1526,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1527,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1528,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1529,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1531,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1532,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1533,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1534,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1535,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1536,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1537,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1538,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1540,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1541,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1542,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1543,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1544,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1546,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
    }
}
