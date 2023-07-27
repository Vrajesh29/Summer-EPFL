// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgSub21(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 89937);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4))
                                   : 0U)),4);
        tracep->chgCData(oldp+1,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_4) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4))
                                               : 0U)))),8);
        tracep->chgCData(oldp+2,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_4))
                                   : 0U)),4);
        tracep->chgCData(oldp+3,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+4,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_4))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+5,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_4) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_4) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+6,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+7,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+8,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+9,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5))
                                   : 0U)),4);
        tracep->chgCData(oldp+10,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5))
                                                : 0U)))),8);
        tracep->chgCData(oldp+11,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5))
                                    : 0U)),4);
        tracep->chgCData(oldp+12,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+13,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+14,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_5) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+15,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+16,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+17,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+18,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6))
                                    : 0U)),4);
        tracep->chgCData(oldp+19,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6))
                                                : 0U)))),8);
        tracep->chgCData(oldp+20,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6))
                                    : 0U)),4);
        tracep->chgCData(oldp+21,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+22,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+23,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_6) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+24,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+25,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+26,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+27,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7))
                                    : 0U)),4);
        tracep->chgCData(oldp+28,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7))
                                                : 0U)))),8);
        tracep->chgCData(oldp+29,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7))
                                    : 0U)),4);
        tracep->chgCData(oldp+30,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+31,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+32,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_7) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+33,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+34,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+35,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+36,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8))
                                    : 0U)),4);
        tracep->chgCData(oldp+37,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8))
                                                : 0U)))),8);
        tracep->chgCData(oldp+38,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8))
                                    : 0U)),4);
        tracep->chgCData(oldp+39,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+40,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+41,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_8) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+42,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+43,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+44,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+45,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9))
                                    : 0U)),4);
        tracep->chgCData(oldp+46,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9))
                                                : 0U)))),8);
        tracep->chgCData(oldp+47,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9))
                                    : 0U)),4);
        tracep->chgCData(oldp+48,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+49,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+50,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_9) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+51,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+52,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+53,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+54,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10))
                                    : 0U)),4);
        tracep->chgCData(oldp+55,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10))
                                                : 0U)))),8);
        tracep->chgCData(oldp+56,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10))
                                    : 0U)),4);
        tracep->chgCData(oldp+57,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+58,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+59,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_10) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+60,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+61,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+62,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+63,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11))
                                    : 0U)),4);
        tracep->chgCData(oldp+64,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11))
                                                : 0U)))),8);
        tracep->chgCData(oldp+65,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11))
                                    : 0U)),4);
        tracep->chgCData(oldp+66,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+67,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+68,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_11) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+69,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+70,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+71,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+72,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12))
                                    : 0U)),4);
        tracep->chgCData(oldp+73,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12))
                                                : 0U)))),8);
        tracep->chgCData(oldp+74,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12))
                                    : 0U)),4);
        tracep->chgCData(oldp+75,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+76,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+77,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_12) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+78,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+79,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+80,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+81,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13))
                                    : 0U)),4);
        tracep->chgCData(oldp+82,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13))
                                                : 0U)))),8);
        tracep->chgCData(oldp+83,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13))
                                    : 0U)),4);
        tracep->chgCData(oldp+84,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+85,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+86,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_13) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+87,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+88,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+89,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+90,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+91,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14))
                                                : 0U)))),8);
        tracep->chgCData(oldp+92,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+93,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+94,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+95,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+96,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+97,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+98,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+99,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+100,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+101,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+102,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+103,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+104,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_5_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+105,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+108,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+109,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+111,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+112,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+113,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+114,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+117,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+118,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+120,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+121,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+122,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+123,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+126,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+127,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+129,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+130,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+131,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+132,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+133,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+135,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+136,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+138,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+139,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+140,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+141,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+144,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+145,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+147,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+148,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+149,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+150,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+153,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+154,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+156,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+157,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+158,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+159,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+162,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+163,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+165,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+166,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+168,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+169,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+171,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+172,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+174,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+175,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+177,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+178,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+180,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+181,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+183,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+184,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+186,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+189,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+190,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+192,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+193,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+195,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+198,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+199,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+201,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+202,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+204,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+206,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+207,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+208,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+210,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+211,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+212,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+213,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+214,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+216,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+217,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+218,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+219,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+220,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+221,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+222,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+223,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+225,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+226,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+227,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+228,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+229,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+230,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+232,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+234,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+235,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+236,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+237,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+238,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+239,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+243,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+244,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+245,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+246,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+247,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+248,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_6_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+250,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+251,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+253,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+254,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+256,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+257,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+259,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+262,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+263,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+265,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+266,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+268,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+271,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+272,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+274,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+275,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+277,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+280,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+281,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+283,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+284,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+286,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+289,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+290,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+292,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+293,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+295,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+298,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+299,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+301,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+302,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+304,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+307,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+308,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+310,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+311,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+313,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+316,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+317,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+319,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+320,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+322,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+324,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+325,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+326,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+328,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+329,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+331,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+332,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+334,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+335,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+337,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+338,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+340,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+343,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+344,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+346,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+347,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+349,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+352,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+353,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+355,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+356,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+358,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+360,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+361,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+362,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+364,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+365,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+367,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+369,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+370,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+371,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+373,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+374,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+375,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+377,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+379,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+380,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+382,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+383,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+384,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+388,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+389,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+391,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+392,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+393,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_7_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+395,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_8.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+397,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+398,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+399,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+401,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+402,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+404,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+407,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+408,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+410,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+411,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+413,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+416,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+417,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+419,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+420,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+422,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+425,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+426,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+428,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+429,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+431,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+434,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+435,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+437,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+438,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+440,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+443,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+444,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+446,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+447,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+449,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+452,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+453,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+455,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+456,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+458,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+461,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+462,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+464,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+465,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+467,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+470,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+471,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+473,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+474,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+476,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+479,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+480,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+482,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+483,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+485,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+488,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+489,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+491,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+492,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+494,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+497,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+498,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+500,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+501,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+503,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+506,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+507,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+509,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+510,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+512,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+515,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+516,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+518,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+519,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+520,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+524,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+525,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+527,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+528,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+529,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+531,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+533,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+534,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+536,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+537,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+538,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_8_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+540,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_9.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+543,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+544,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+546,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+547,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+549,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+552,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+553,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+555,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+556,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+557,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+558,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+559,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+561,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+562,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+564,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+565,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+567,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+568,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+570,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+571,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+573,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+574,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+575,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+576,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+579,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+580,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+582,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+583,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+584,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+585,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+588,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+589,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+591,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+592,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+594,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+596,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+597,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+598,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+599,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+600,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+601,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+603,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+605,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+606,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+607,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+609,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+610,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+612,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+613,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+615,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+616,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+618,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+619,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+621,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+624,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+625,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+626,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+627,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+628,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+630,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+632,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+633,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+634,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+636,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+637,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+638,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+639,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+641,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+642,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+643,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+644,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+645,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+646,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+647,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+648,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+649,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+651,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+652,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+654,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+655,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+656,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+657,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+658,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+660,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+661,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+663,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+664,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+665,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+666,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+667,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+669,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+670,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+672,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+673,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+674,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+675,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+678,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+679,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+680,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+681,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+682,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+683,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_9_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+685,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_10.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+686,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+688,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+689,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+690,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+691,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+692,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+693,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+694,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+697,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+698,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+700,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+701,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+703,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+706,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+707,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+708,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+709,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+710,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+711,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+715,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+716,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+717,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+718,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+719,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+721,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+723,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+724,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+725,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+727,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+728,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+729,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+733,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+734,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+735,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+736,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+737,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+738,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+739,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+742,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+743,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+745,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+746,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+751,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+752,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+753,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+754,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+755,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+757,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+760,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+761,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+763,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+764,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+766,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+767,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+769,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+770,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+772,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+773,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+774,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+775,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+778,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+779,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+780,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+781,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+782,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+784,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+787,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+788,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+790,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+791,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+792,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+793,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+796,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+797,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+798,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+799,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+800,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+801,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+802,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+804,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+805,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+806,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+808,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+809,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+810,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+812,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+814,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+815,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+816,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+817,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+818,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+819,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+820,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+823,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+824,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+825,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+826,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+827,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+828,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+829,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_10_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+830,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_11.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+832,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+833,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+834,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+835,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+836,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+837,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+840,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+842,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+843,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+844,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+845,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+846,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+847,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+848,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+851,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+852,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+853,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+854,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+855,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+857,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+860,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+861,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+862,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+863,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+864,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+865,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+869,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+870,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+871,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+872,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+873,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+875,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+877,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+878,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+879,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+880,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+881,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+882,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+883,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+885,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+887,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+888,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+889,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+890,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+891,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+892,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+893,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+896,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+897,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+898,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+899,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+900,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+902,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+905,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+906,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+907,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+908,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+909,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+910,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+911,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+914,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+915,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+917,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+918,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+919,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+920,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+921,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+922,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+923,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+924,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+925,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+926,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+927,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+928,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+929,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+930,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+932,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+933,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+934,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+935,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+936,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+937,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+938,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+941,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+942,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+943,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+944,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+945,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+946,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+950,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+951,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+952,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+953,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+954,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+955,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+957,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+959,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+960,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+961,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+962,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+963,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+964,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+966,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+968,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+969,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+970,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+971,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+972,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+973,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_11_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+975,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_12.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+978,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+979,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+980,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+981,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+982,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+984,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+987,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+988,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+989,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+990,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+991,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+993,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+996,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+997,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+998,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+999,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+1000,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1002,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1005,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1006,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1007,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1008,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1009,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1011,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1014,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1015,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1016,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1017,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1018,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1020,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1023,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1024,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1025,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1026,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1027,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1029,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1032,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1033,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1034,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1035,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1036,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1038,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1041,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1042,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1043,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1044,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1045,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1047,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1050,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1051,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1052,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1053,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1054,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1056,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1059,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1060,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1061,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1062,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1063,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1064,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1065,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1068,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1069,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1070,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1071,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1072,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1073,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1074,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1076,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1077,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1078,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1079,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1080,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1081,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1082,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1083,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1084,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1086,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1087,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1088,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1089,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1090,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1091,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1093,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1095,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1096,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1097,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1098,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1099,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1100,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1104,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1105,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1106,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1107,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1108,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1109,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1113,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1114,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1115,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1116,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1117,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1118,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_12_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1120,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_13.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1123,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1124,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1126,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1127,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1132,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1133,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1135,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1136,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1141,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1142,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1144,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1145,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1150,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1151,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1153,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1154,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1159,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1160,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1162,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1163,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1168,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1169,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1171,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1172,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1177,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1178,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1180,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1181,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1186,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1187,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1189,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1190,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1195,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1196,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1198,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1199,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1201,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1202,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1204,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1205,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1207,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1208,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1210,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1211,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1213,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1214,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1216,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1217,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1218,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1219,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1222,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1223,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1225,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1226,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1227,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1231,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1232,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1233,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1234,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1235,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1236,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1238,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1239,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1240,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1241,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1242,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1243,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1244,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1245,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1247,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1249,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1250,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1251,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1252,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1253,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1254,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1256,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1258,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1259,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1260,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1261,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1262,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1263,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_13_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1265,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_14.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1268,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1269,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1271,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1272,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1277,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1278,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1280,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1281,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1286,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1287,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1289,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1290,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1295,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1296,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1298,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1299,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1304,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1305,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1307,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1308,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1312,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1313,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1314,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1316,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1317,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1320,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1322,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1323,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1325,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1326,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1331,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1332,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1334,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1335,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1340,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1341,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1343,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1344,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1349,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1350,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1352,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1353,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1356,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1358,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1359,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1361,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1362,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1365,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1367,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1368,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1370,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1371,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1376,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1377,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1379,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1380,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1385,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1386,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1388,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1389,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1393,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1394,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1395,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1396,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1397,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1398,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1399,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1401,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1403,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1404,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1405,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1406,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1407,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1408,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_14_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1410,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_10_15.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1413,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1414,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1416,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1417,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1422,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1423,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1425,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1426,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1430,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1431,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1432,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1434,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1435,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1440,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1441,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1443,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1444,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1449,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1450,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1452,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1453,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1458,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1459,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1461,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1462,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1466,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1467,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1468,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1470,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1471,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1476,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1477,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1479,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1480,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1485,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1486,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1488,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1489,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1491,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1494,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1495,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1497,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1498,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1500,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1502,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1503,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1504,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1506,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1507,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1509,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1512,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1513,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1515,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1516,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1519,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1521,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1522,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1524,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1525,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1530,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1531,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1533,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1534,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1539,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1540,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1542,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1543,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1544,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1546,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_10_15_io_in_ver_r_man_15)))),4);
    }
}
