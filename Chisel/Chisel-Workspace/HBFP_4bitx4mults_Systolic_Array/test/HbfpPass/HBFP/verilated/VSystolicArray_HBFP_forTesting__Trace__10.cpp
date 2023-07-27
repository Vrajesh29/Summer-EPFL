// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgSub10(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 72907);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_13) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+1,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_13))
                                   : 0U)),4);
        tracep->chgCData(oldp+2,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_13) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_13))
                                               : 0U)))),8);
        tracep->chgCData(oldp+3,(((IData)(vlTOPp->io_in_flag)
                                   ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_13))
                                   : 0U)),4);
        tracep->chgCData(oldp+4,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_13) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+5,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_13))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_13) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+6,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                             ? (3U 
                                                & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_13) 
                                                   >> 4U))
                                             : 0U) 
                                           * ((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_13) 
                                                     >> 4U))
                                               : 0U)))),8);
        tracep->chgCData(oldp+7,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+8,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                           ? (0xfU 
                                              & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14))
                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+9,(((IData)(vlTOPp->io_in_flag)
                                   ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14) 
                                            >> 4U))
                                   : 0U)),4);
        tracep->chgCData(oldp+10,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+11,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14))
                                                : 0U)))),8);
        tracep->chgCData(oldp+12,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14))
                                    : 0U)),4);
        tracep->chgCData(oldp+13,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+14,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+15,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_14) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+16,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+17,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+18,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+19,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+20,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15))
                                                : 0U)))),8);
        tracep->chgCData(oldp+21,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15))
                                    : 0U)),4);
        tracep->chgCData(oldp+22,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+23,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+24,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_hor_r_man_15) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_15_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                             ? ((0x3fU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                 ? 0x3fU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                             : ((0xfU 
                                                 < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                                 ? 0xfU
                                                 : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+26,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)))),4);
        tracep->chgCData(oldp+27,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+28,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+29,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0))
                                    : 0U)),4);
        tracep->chgCData(oldp+30,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0))
                                                : 0U)))),8);
        tracep->chgCData(oldp+31,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                    : 0U)),4);
        tracep->chgCData(oldp+32,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+33,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+34,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+35,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)))),4);
        tracep->chgCData(oldp+36,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+37,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+38,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1))
                                    : 0U)),4);
        tracep->chgCData(oldp+39,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1))
                                                : 0U)))),8);
        tracep->chgCData(oldp+40,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                                    : 0U)),4);
        tracep->chgCData(oldp+41,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+42,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+43,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+44,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)))),4);
        tracep->chgCData(oldp+45,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+46,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+47,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2))
                                    : 0U)),4);
        tracep->chgCData(oldp+48,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2))
                                                : 0U)))),8);
        tracep->chgCData(oldp+49,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                                    : 0U)),4);
        tracep->chgCData(oldp+50,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+51,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+52,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+53,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)))),4);
        tracep->chgCData(oldp+54,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+55,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+56,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3))
                                    : 0U)),4);
        tracep->chgCData(oldp+57,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3))
                                                : 0U)))),8);
        tracep->chgCData(oldp+58,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                                    : 0U)),4);
        tracep->chgCData(oldp+59,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+60,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+61,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+62,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4)))),4);
        tracep->chgCData(oldp+63,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+64,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+65,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4))
                                    : 0U)),4);
        tracep->chgCData(oldp+66,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4))
                                                : 0U)))),8);
        tracep->chgCData(oldp+67,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                                    : 0U)),4);
        tracep->chgCData(oldp+68,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+69,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+70,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+71,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5)))),4);
        tracep->chgCData(oldp+72,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+73,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+74,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5))
                                    : 0U)),4);
        tracep->chgCData(oldp+75,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5))
                                                : 0U)))),8);
        tracep->chgCData(oldp+76,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                                    : 0U)),4);
        tracep->chgCData(oldp+77,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+78,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+79,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+80,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6)))),4);
        tracep->chgCData(oldp+81,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+82,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+83,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6))
                                    : 0U)),4);
        tracep->chgCData(oldp+84,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6))
                                                : 0U)))),8);
        tracep->chgCData(oldp+85,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                                    : 0U)),4);
        tracep->chgCData(oldp+86,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+87,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+88,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+89,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7)))),4);
        tracep->chgCData(oldp+90,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+91,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+92,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7))
                                    : 0U)),4);
        tracep->chgCData(oldp+93,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7))
                                                : 0U)))),8);
        tracep->chgCData(oldp+94,(((IData)(vlTOPp->io_in_flag)
                                    ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                                    : 0U)),4);
        tracep->chgCData(oldp+95,(((IData)(vlTOPp->io_in_flag)
                                    ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7) 
                                             >> 4U))
                                    : 0U)),4);
        tracep->chgCData(oldp+96,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+97,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                              ? (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                                    >> 4U))
                                              : 0U) 
                                            * ((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                : 0U)))),8);
        tracep->chgCData(oldp+98,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8)))),4);
        tracep->chgCData(oldp+99,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                            ? (0xfU 
                                               & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8))
                                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+100,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+101,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+102,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+103,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+104,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+105,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+106,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9)))),4);
        tracep->chgCData(oldp+108,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+109,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+110,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+112,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+113,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+114,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+115,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10)))),4);
        tracep->chgCData(oldp+117,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+118,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+119,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+121,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+122,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+123,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+124,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11)))),4);
        tracep->chgCData(oldp+126,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+127,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+128,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+130,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+131,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+132,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+133,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12)))),4);
        tracep->chgCData(oldp+135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+136,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+137,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+139,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+140,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+141,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+142,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13)))),4);
        tracep->chgCData(oldp+144,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+145,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+146,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+148,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+149,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+150,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+151,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14)))),4);
        tracep->chgCData(oldp+153,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+154,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+155,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+157,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+158,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+159,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+160,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15)))),4);
        tracep->chgCData(oldp+162,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+163,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+164,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+166,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+167,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+168,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+169,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+170,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+171,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+173,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+174,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+175,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+176,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+177,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+178,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+181,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+182,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+183,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+184,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+185,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+186,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+187,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+190,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+191,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+192,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+193,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+194,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+195,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+196,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+198,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+200,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+201,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+202,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+203,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+204,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+205,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+207,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+209,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+210,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+211,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+212,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+213,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+214,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+218,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+219,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+220,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+221,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+222,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+223,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+226,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+227,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+228,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+229,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+230,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+231,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+232,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+233,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+235,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+236,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+237,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+238,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+239,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+240,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+241,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+242,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+243,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+245,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+246,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+247,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+248,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+249,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+250,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+251,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+253,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+254,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+255,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+256,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+257,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+258,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+259,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+260,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+263,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+264,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+265,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+266,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+267,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+268,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+269,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+271,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+272,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+273,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+275,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+276,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+277,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+278,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+280,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+281,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+282,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+284,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+285,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+286,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+287,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+290,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+291,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+293,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+294,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+295,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+296,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+298,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+299,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+300,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+302,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+303,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+304,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+305,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+307,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+308,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+309,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+311,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+312,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+313,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+314,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+315,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+316,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+318,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+319,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+320,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+321,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+322,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+323,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+325,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+327,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+328,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+329,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+330,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+331,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+332,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+334,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+336,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+337,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+338,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+339,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+340,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+341,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+343,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+344,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+345,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+346,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+347,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+348,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+349,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+350,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+352,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+353,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+354,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+355,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+356,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+357,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+358,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+359,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+361,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+363,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+364,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+365,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+366,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+367,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+368,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+372,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+373,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+374,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+375,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+376,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+377,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+381,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+382,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+383,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+384,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+385,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+386,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+389,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+390,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+391,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+392,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+393,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+394,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+395,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+396,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+397,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+398,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+399,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+400,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+401,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+402,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+403,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+404,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+405,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+407,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+408,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+409,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+410,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+411,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+412,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+413,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+414,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+416,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+417,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+418,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+420,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+421,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+422,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+423,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+425,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+426,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+427,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+429,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+430,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+431,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+432,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+434,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+435,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+436,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+438,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+439,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+440,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+441,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+443,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+444,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+445,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+447,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+448,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+449,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+450,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+452,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+453,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+454,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+456,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+457,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+458,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+459,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+460,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+461,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+462,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+463,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+464,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+465,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+466,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+467,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+468,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+470,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+472,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+473,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+474,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+475,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+476,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+477,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+479,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+481,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+482,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+483,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+484,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+485,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+486,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+488,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+490,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+491,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+492,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+493,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+494,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+495,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+497,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+498,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+499,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+500,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+501,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+502,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+503,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+504,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+506,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+507,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+508,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+509,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+510,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+511,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+512,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+513,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+515,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+517,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+518,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+519,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+520,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+521,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+522,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+525,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+526,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+527,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+528,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+529,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+530,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+531,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+534,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+535,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+536,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+537,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+538,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+539,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+540,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+543,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+544,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+545,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+546,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+547,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+548,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+549,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+550,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+552,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+553,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+554,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+555,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+556,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+557,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+558,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+559,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+562,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+563,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+564,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+565,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+566,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+567,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+568,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+571,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+572,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+573,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+574,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+575,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+576,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+577,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+579,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+580,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+581,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+582,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+583,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+584,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+585,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+586,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+588,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+589,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+590,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+591,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+592,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+593,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+594,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+595,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+596,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+597,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+598,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+599,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+600,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+601,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+602,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+603,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+604,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+605,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+606,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+608,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+609,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+610,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+611,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+612,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+613,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+614,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+616,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+617,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+618,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+619,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+620,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+621,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+622,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+623,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+624,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+625,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+626,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+627,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+628,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+629,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+630,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+631,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+633,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+635,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+636,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+637,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+638,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+639,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+640,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+642,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+644,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+645,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+646,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+647,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+648,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+649,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+650,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+653,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+654,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+655,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+656,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+657,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+658,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+659,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+661,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+662,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+663,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+664,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+665,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+666,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+667,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+668,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+670,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+671,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+672,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+673,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+674,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+675,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+676,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+677,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+678,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+679,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+680,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+681,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+682,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+683,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+684,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+685,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+686,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+689,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+690,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+691,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+692,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+693,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+694,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+695,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+697,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+698,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+699,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+700,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+701,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+702,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+703,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+704,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+706,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+707,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+708,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+709,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+710,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+711,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+713,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+715,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+716,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+717,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+718,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+719,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+720,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+721,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+722,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+723,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+724,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+725,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+726,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+727,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+728,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+729,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+731,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+733,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+734,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+735,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+736,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+737,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+738,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+739,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+740,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+742,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+743,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+744,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+745,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+746,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+747,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+749,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+750,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+751,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+752,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+753,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+754,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+755,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+756,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+757,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+758,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+759,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+760,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+762,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+763,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+764,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+765,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+766,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+767,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+768,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+769,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+771,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+772,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+773,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+774,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+775,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+776,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+777,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+779,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+780,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+781,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+782,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+783,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+784,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+785,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+787,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+788,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+789,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+790,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+791,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+792,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+793,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+794,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+795,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+796,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+798,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+799,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+800,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+801,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+802,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+803,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+804,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+806,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+807,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+808,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+809,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+810,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+811,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+812,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+813,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+815,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+816,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+817,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+818,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+819,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+820,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+821,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+822,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+823,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+824,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+825,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+826,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+827,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+828,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+829,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+830,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+831,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+832,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+833,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+834,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+835,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+836,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+837,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+838,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+840,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+842,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+843,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+844,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+845,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+846,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+847,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+848,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+849,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+851,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+852,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+853,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+854,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+855,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+856,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+857,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+858,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_11) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+860,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+861,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+862,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+863,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+864,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12))
                                     : 0U)),4);
        tracep->chgCData(oldp+865,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+867,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_12) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+869,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+870,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+871,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+872,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+873,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13))
                                     : 0U)),4);
        tracep->chgCData(oldp+874,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+875,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+876,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_13) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+877,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+878,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+879,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+880,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+881,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+882,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14))
                                     : 0U)),4);
        tracep->chgCData(oldp+883,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+885,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_14) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+888,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+889,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+890,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+891,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15))
                                     : 0U)),4);
        tracep->chgCData(oldp+892,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+893,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+894,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_r_man_15) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+895,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                              ? ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                              : ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+896,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+897,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+898,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+899,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+900,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+901,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0))
                                     : 0U)),4);
        tracep->chgCData(oldp+902,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+903,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+904,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_0) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+905,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+906,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+907,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+908,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+909,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+910,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1))
                                     : 0U)),4);
        tracep->chgCData(oldp+911,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+912,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+913,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_1) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+914,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+916,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+917,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+918,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+919,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2))
                                     : 0U)),4);
        tracep->chgCData(oldp+920,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+921,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+922,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_2) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+925,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+926,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+927,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+928,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3))
                                     : 0U)),4);
        tracep->chgCData(oldp+929,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+930,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+931,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_3) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+934,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+935,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+936,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+937,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4))
                                     : 0U)),4);
        tracep->chgCData(oldp+938,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+939,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+940,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_4) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+942,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+943,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+944,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+945,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+946,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5))
                                     : 0U)),4);
        tracep->chgCData(oldp+947,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+948,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+949,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_5) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+950,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+951,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+952,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+953,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+954,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+955,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6))
                                     : 0U)),4);
        tracep->chgCData(oldp+956,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+957,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+958,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_6) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+959,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+961,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+962,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+963,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+964,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7))
                                     : 0U)),4);
        tracep->chgCData(oldp+965,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+966,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+967,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_7) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+970,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+971,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+972,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+973,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8))
                                     : 0U)),4);
        tracep->chgCData(oldp+974,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+975,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+976,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_8) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+978,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+979,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+980,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+981,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+982,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9))
                                     : 0U)),4);
        tracep->chgCData(oldp+983,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+984,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+985,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_9) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+987,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+988,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+989,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+990,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+991,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10))
                                     : 0U)),4);
        tracep->chgCData(oldp+992,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+993,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+994,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_10) 
                                                    >> 4U))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+996,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                             ? (0xfU 
                                                & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11))
                                             : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+997,(((IData)(vlTOPp->io_in_flag)
                                     ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11) 
                                              >> 4U))
                                     : 0U)),4);
        tracep->chgCData(oldp+998,(((IData)(vlTOPp->io_in_flag)
                                     ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11))
                                     : 0U)),4);
        tracep->chgCData(oldp+999,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                               : 0U) 
                                             * ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11))
                                                 : 0U)))),8);
        tracep->chgCData(oldp+1000,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1001,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1002,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1003,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1005,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1006,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1007,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1008,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1009,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1010,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1011,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1012,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1014,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1015,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1016,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1017,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1018,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1019,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1020,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1021,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1023,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1024,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1025,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1026,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1027,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1028,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1029,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1030,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1032,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1033,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1034,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1035,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1036,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1037,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1038,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1039,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1040,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1041,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1043,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1044,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1045,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1046,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1047,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1048,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1049,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1051,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1052,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1053,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1054,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1055,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1056,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1057,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1058,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1060,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1061,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1062,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1063,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1064,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1065,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1066,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1067,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1068,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1070,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1071,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1072,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1073,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1074,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1075,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1076,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1077,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1079,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1080,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1081,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1082,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1083,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1084,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1085,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1087,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1088,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1089,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1090,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1091,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1092,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1093,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1094,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1096,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1097,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1098,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1099,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1100,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1101,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1102,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1103,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1105,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1106,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1107,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1108,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1109,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1110,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1112,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1114,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1115,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1116,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1117,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1118,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1119,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1121,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1123,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1124,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1125,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1126,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1127,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1128,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1130,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1132,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1133,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1134,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1135,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1136,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1137,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1139,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1141,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1142,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1143,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1144,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1145,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1146,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1148,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1150,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1151,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1152,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1153,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1154,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1155,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1157,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1159,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1160,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1161,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1162,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1163,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1164,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1166,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1169,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1170,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1171,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1172,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1173,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1175,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1177,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1178,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1179,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1180,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1181,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1182,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1184,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1185,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_8.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1186,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1188,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1189,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1190,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1191,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1192,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1193,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1195,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1197,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1198,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1199,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1200,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1201,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1202,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1204,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1206,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1207,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1208,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1209,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1210,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1211,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1212,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1213,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1214,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1215,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1216,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1217,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1218,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1219,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1220,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1221,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1222,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1223,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1224,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1225,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1226,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1227,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1228,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1229,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1230,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1231,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1232,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1233,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1234,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1235,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1236,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1237,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1238,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1239,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1242,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1243,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1244,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1245,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1246,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1247,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1248,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1250,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1251,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1252,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1253,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1254,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1255,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1256,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1257,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1259,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1260,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1261,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1262,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1263,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1264,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1265,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1266,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1268,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1269,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1270,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1271,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1272,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1273,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1275,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1277,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1278,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1279,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1280,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1281,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1282,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1284,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1286,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1287,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1288,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1289,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1290,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1291,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1293,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1295,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1296,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1297,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1298,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1299,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1300,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1302,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1304,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1305,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1306,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1307,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1308,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1309,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1311,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1312,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1313,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1314,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1315,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1316,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1317,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1318,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1320,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1322,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1323,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1324,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1325,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1326,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1327,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1329,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_8_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1330,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_9.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1331,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1332,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1333,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1334,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1335,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1336,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1337,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1338,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1340,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1342,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1343,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1344,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1345,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1346,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1347,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1349,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1351,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1352,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1353,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1354,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1355,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1356,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1360,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1361,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1362,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1363,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1364,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1365,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1367,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1369,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1370,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1371,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1372,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1373,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1374,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1375,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1376,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1377,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1378,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1379,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1380,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1381,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1382,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1383,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1384,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1385,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1387,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1388,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1389,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1390,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1391,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1392,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1393,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1394,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1396,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1397,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1398,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1399,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1400,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1401,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1402,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8)))),4);
        tracep->chgCData(oldp+1404,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8)))),4);
        tracep->chgCData(oldp+1405,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1406,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1407,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1408,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8))
                                      : 0U)),4);
        tracep->chgCData(oldp+1409,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1410,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1411,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_8) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9)))),4);
        tracep->chgCData(oldp+1413,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9)))),4);
        tracep->chgCData(oldp+1414,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1415,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1416,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1417,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9))
                                      : 0U)),4);
        tracep->chgCData(oldp+1418,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1420,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_9) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10)))),4);
        tracep->chgCData(oldp+1422,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10)))),4);
        tracep->chgCData(oldp+1423,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1424,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1425,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1426,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10))
                                      : 0U)),4);
        tracep->chgCData(oldp+1427,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1429,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_10) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1430,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11)))),4);
        tracep->chgCData(oldp+1431,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11)))),4);
        tracep->chgCData(oldp+1432,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1433,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1434,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1435,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11))
                                      : 0U)),4);
        tracep->chgCData(oldp+1436,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1438,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_11) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12)))),4);
        tracep->chgCData(oldp+1440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12)))),4);
        tracep->chgCData(oldp+1441,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1442,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1443,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1444,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12))
                                      : 0U)),4);
        tracep->chgCData(oldp+1445,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1447,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_12) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13)))),4);
        tracep->chgCData(oldp+1449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13)))),4);
        tracep->chgCData(oldp+1450,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1451,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1452,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1453,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13))
                                      : 0U)),4);
        tracep->chgCData(oldp+1454,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1456,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_13) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14)))),4);
        tracep->chgCData(oldp+1458,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14)))),4);
        tracep->chgCData(oldp+1459,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1460,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1461,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1462,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14))
                                      : 0U)),4);
        tracep->chgCData(oldp+1463,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1465,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_14) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1466,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15)))),4);
        tracep->chgCData(oldp+1467,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15)))),4);
        tracep->chgCData(oldp+1468,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1469,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1470,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1471,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15))
                                      : 0U)),4);
        tracep->chgCData(oldp+1472,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1474,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_9_io_in_ver_r_man_15) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1475,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                               ? ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))
                                               : ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_10.__PVT__adder__DOT__addition))))),6);
        tracep->chgCData(oldp+1476,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0)))),4);
        tracep->chgCData(oldp+1477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0)))),4);
        tracep->chgCData(oldp+1478,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1479,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1480,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1481,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0))
                                      : 0U)),4);
        tracep->chgCData(oldp+1482,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1483,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_0) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1485,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1)))),4);
        tracep->chgCData(oldp+1486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1)))),4);
        tracep->chgCData(oldp+1487,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1488,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1489,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1490,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1))
                                      : 0U)),4);
        tracep->chgCData(oldp+1491,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1492,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_1) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1494,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2)))),4);
        tracep->chgCData(oldp+1495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2)))),4);
        tracep->chgCData(oldp+1496,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1497,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1498,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1499,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2))
                                      : 0U)),4);
        tracep->chgCData(oldp+1500,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1501,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_2) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1503,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3)))),4);
        tracep->chgCData(oldp+1504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3)))),4);
        tracep->chgCData(oldp+1505,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1506,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1507,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1508,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3))
                                      : 0U)),4);
        tracep->chgCData(oldp+1509,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1510,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_3) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1512,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4)))),4);
        tracep->chgCData(oldp+1513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4)))),4);
        tracep->chgCData(oldp+1514,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1515,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1516,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1517,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4))
                                      : 0U)),4);
        tracep->chgCData(oldp+1518,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1519,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1520,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_4) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1521,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5)))),4);
        tracep->chgCData(oldp+1522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5)))),4);
        tracep->chgCData(oldp+1523,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1524,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1525,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1526,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5))
                                      : 0U)),4);
        tracep->chgCData(oldp+1527,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1528,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1529,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_5) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1530,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6)))),4);
        tracep->chgCData(oldp+1531,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6)))),4);
        tracep->chgCData(oldp+1532,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1533,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1534,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1535,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6))
                                      : 0U)),4);
        tracep->chgCData(oldp+1536,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1537,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1538,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_6) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1539,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7)))),4);
        tracep->chgCData(oldp+1540,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                              ? (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7))
                                              : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7)))),4);
        tracep->chgCData(oldp+1541,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1542,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1543,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1544,(((IData)(vlTOPp->io_in_flag)
                                      ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7))
                                      : 0U)),4);
        tracep->chgCData(oldp+1545,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7) 
                                               >> 4U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1546,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1547,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_10_io_in_ver_r_man_7) 
                                                     >> 4U))
                                                  : 0U)))),8);
    }
}
