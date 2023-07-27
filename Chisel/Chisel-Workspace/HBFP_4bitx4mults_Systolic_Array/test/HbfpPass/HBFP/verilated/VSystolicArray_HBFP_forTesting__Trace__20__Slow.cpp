// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub7(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+68266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13)))),4);
        tracep->fullCData(oldp+68267,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68268,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68269,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68270,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68271,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68272,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68274,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+68275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14)))),4);
        tracep->fullCData(oldp+68276,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68277,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68278,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68279,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68280,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68281,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68283,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+68284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15)))),4);
        tracep->fullCData(oldp+68285,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68286,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68287,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68288,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68289,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68290,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68292,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+68293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+68294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+68295,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68296,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68298,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68299,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+68303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+68304,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68305,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68307,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68308,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+68312,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+68313,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68314,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68316,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68317,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68320,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+68321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+68322,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68323,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68325,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68326,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+68330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+68331,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68332,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68334,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68335,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+68339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+68340,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68341,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68343,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+68348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+68349,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68350,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68352,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68353,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68356,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+68357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+68358,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68359,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68361,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68362,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68365,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+68366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+68367,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68368,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68370,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68371,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+68375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+68376,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68377,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68379,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68380,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+68384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+68385,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68386,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68388,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68389,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+68393,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+68394,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68395,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68396,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68397,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68398,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68399,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68401,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+68402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+68403,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68404,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68405,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68406,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68407,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68408,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68410,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+68411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+68412,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68413,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68414,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68415,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68416,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68417,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68419,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+68420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+68421,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68422,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68423,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68424,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68425,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68426,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68428,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+68429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+68430,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68431,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68432,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68433,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68434,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68435,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68437,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+68438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+68439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+68440,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68441,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68443,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68444,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+68448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+68449,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68450,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68452,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68453,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+68457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+68458,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68459,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68461,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68462,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+68466,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+68467,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68468,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68470,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68471,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+68475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+68476,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68477,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68479,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68480,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+68484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+68485,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68486,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68488,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68489,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68491,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+68493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+68494,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68495,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68497,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68498,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68500,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+68502,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+68503,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68504,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68506,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68507,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68509,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+68511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+68512,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68513,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68515,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68516,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68519,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+68520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+68521,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68522,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68524,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68525,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+68529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+68530,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68531,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68533,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68534,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+68538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+68539,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68540,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68542,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68543,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68544,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68546,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+68547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+68548,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68549,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68550,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68551,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68552,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68553,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68555,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+68556,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+68557,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68558,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68559,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68560,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68561,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68562,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68564,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+68565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+68566,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68567,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68568,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68569,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68570,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68571,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68573,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+68574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+68575,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68576,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68577,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68578,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68579,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68580,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68582,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+68583,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+68584,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+68585,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68586,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68587,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68588,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68589,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68591,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68592,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+68593,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+68594,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68595,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68596,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68597,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68598,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68599,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68600,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68601,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+68602,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+68603,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68604,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68605,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68606,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68607,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68609,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+68611,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+68612,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68613,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68614,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68615,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68616,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68618,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+68620,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+68621,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68622,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68623,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68624,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68625,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68626,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68627,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68628,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+68629,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+68630,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68631,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68633,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68634,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68636,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68637,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+68638,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+68639,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68640,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68642,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68643,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68644,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68645,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68646,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+68647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+68648,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68649,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68650,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68651,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68652,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68654,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+68656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+68657,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68658,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68659,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68660,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68661,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68663,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68664,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+68665,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+68666,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68667,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68668,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68669,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68670,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68672,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68673,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+68674,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+68675,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68676,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68677,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68678,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68679,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68680,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68681,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68682,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+68683,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+68684,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68685,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68686,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68687,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68688,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68689,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68690,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68691,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+68692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+68693,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68694,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68695,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68696,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68697,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68698,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+68701,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+68702,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68703,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68704,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68705,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68706,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68707,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68708,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+68710,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+68711,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68712,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68713,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68714,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68715,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68716,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68717,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68718,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+68719,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+68720,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68721,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68722,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68723,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68724,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68725,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68727,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+68728,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+68729,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+68730,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68731,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68732,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68733,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68734,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68735,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68736,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68737,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+68738,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+68739,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68740,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68741,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68742,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68743,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68745,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+68747,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+68748,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68749,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68750,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68751,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68752,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68753,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68754,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68755,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+68756,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+68757,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68758,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68759,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68760,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68761,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68763,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68764,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+68765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+68766,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68767,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68768,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68769,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68770,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68772,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+68774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+68775,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68776,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68777,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68778,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68779,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68780,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68781,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+68783,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+68784,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68785,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68787,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68788,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68790,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68791,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+68792,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+68793,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68794,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68795,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68796,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68797,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68798,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68799,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68800,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+68801,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+68802,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68803,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68804,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68805,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68806,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68808,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68809,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+68810,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+68811,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68812,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68813,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68814,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68815,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68816,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68817,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68818,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+68819,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+68820,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68821,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68822,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68823,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68824,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68825,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68826,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68827,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+68828,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+68829,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68830,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68831,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68832,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68833,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68834,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68835,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68836,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+68837,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+68838,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68839,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68840,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68841,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68842,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68843,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68844,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68845,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+68846,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+68847,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68848,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68849,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68850,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68851,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68852,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68853,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68854,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+68855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+68856,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68857,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68858,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68859,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+68860,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68861,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68862,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68863,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+68864,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+68865,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68866,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68867,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68868,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+68869,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68870,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68871,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68872,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+68873,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+68874,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+68875,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68876,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68877,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68878,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+68879,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68880,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68881,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68882,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+68883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+68884,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68885,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68886,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68887,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+68888,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68889,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68890,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+68892,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+68893,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68894,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68895,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68896,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+68897,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68898,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68899,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+68901,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+68902,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68903,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68904,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68905,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+68906,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68907,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68908,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68909,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+68910,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+68911,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68912,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68913,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68914,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+68915,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68917,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68918,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+68919,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+68920,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68921,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68922,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68923,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+68924,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68925,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68926,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+68928,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+68929,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68930,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68931,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68932,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+68933,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68934,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68935,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68936,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+68937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+68938,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68939,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68940,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68941,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+68942,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68943,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68944,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68945,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+68946,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+68947,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68948,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68949,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68950,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+68951,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68952,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68953,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68954,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+68955,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+68956,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68957,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68958,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68959,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+68960,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68961,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68962,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68963,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+68964,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+68965,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68966,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68967,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68968,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+68969,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68970,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68971,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68972,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+68973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+68974,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68975,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68976,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68977,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+68978,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68979,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68980,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+68982,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+68983,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68984,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68985,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68986,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+68987,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68988,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68989,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68990,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+68991,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+68992,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68993,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68994,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68995,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+68996,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+68997,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68998,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+68999,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+69000,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+69001,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69002,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69003,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69004,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69005,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69006,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69007,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69008,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+69009,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+69010,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69011,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69012,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69013,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69014,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69015,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69016,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69017,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+69018,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+69019,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+69020,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69021,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69022,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69023,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69024,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69025,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69026,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69027,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+69028,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+69029,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69030,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69031,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69032,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69033,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69034,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69035,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69036,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+69037,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+69038,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69039,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69040,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69041,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69042,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69043,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69044,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+69046,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+69047,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69048,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69049,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69050,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69051,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69052,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69053,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69054,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+69055,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+69056,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69057,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69058,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69059,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69060,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69061,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69062,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69063,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+69064,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+69065,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69066,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69067,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69068,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69069,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69070,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69071,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69072,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+69073,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+69074,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69075,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69076,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69077,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69078,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69079,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69080,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69081,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+69082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+69083,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69084,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69085,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69086,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69087,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69088,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69089,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+69091,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+69092,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69093,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69094,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69095,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69096,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69097,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69098,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69099,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+69100,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+69101,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69102,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69103,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69104,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69105,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69106,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69107,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69108,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+69109,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+69110,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69111,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69112,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69113,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69114,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69115,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69116,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69117,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+69118,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+69119,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69120,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69121,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69122,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69123,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69124,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69126,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+69127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+69128,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69129,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69130,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69131,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69132,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69133,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+69136,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+69137,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69138,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69139,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69140,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69141,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69142,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69144,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+69145,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+69146,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69147,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69148,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69149,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69150,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69151,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69153,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+69154,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+69155,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69156,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69157,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69158,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69159,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69160,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69162,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+69163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+69164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+69165,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69166,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69168,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69169,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69171,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+69173,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+69174,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69175,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69177,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69178,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69180,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69181,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+69182,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+69183,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69184,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69186,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69187,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69189,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69190,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+69191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+69192,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69193,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69195,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69196,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69198,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69199,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+69200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+69201,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69202,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69204,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69205,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69207,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+69209,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+69210,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69211,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69212,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69213,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69214,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69216,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+69218,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+69219,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69220,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69221,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69222,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69223,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69225,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69226,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+69227,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+69228,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69229,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69230,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69231,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69232,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69233,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69234,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69235,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+69236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+69237,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69238,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69239,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69240,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69241,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69242,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69243,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69244,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+69245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+69246,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69247,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69248,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69249,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69250,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69251,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69252,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69253,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+69254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+69255,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69256,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69257,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69258,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69259,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69260,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69261,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+69263,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+69264,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69265,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69266,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69267,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69268,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69269,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69271,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+69272,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+69273,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69274,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69275,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69276,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69277,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69278,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69280,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+69281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+69282,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69283,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69284,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69285,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69286,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69287,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+69290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+69291,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69292,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69293,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69294,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69295,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69296,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69298,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+69299,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+69300,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69301,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69302,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69303,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69304,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69305,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69307,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+69308,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+69309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+69310,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69311,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69313,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69314,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69316,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+69318,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+69319,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69320,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69322,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69323,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69325,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+69327,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+69328,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69329,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69331,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69332,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69334,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+69336,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+69337,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69338,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69340,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69341,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69343,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69344,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+69345,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+69346,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69347,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69349,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69350,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69352,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69353,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+69354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+69355,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69356,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69358,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69359,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69361,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+69363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+69364,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69365,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69367,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69368,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69370,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+69372,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+69373,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69374,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69375,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69376,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69377,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69379,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+69381,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+69382,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69383,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69384,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69385,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69386,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69388,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69389,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+69390,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+69391,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69392,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69393,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69394,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69395,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69396,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69397,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69398,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+69399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+69400,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69401,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69402,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69403,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69404,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69405,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69406,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69407,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+69408,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+69409,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69410,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69411,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69412,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69413,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69414,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69416,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+69417,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+69418,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69419,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69420,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69421,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69422,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69423,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69425,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+69426,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+69427,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69428,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69429,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69430,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69431,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69432,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69434,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+69435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+69436,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69437,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69438,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69439,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69440,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69441,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69443,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+69444,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+69445,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69446,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69447,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69448,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69449,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69450,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69452,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+69453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+69454,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+69455,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69456,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69458,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69459,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69461,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69462,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+69463,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+69464,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69465,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69467,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69468,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69470,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69471,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+69472,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+69473,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69474,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69476,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69477,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69479,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+69481,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+69482,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69483,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69485,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69486,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69488,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+69490,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+69491,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69492,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69494,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69495,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69497,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69498,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+69499,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+69500,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69501,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69503,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69504,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69506,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69507,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+69508,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+69509,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69510,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69512,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69513,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69515,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69516,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+69517,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+69518,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69519,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69520,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69521,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69522,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69524,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69525,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+69526,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+69527,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69528,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69529,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69530,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69531,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69533,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69534,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+69535,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+69536,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69537,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69538,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69539,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69540,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69542,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69543,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+69544,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+69545,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69546,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69547,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69548,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69549,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69550,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69551,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69552,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+69553,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+69554,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69555,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69556,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69557,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69558,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69559,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69560,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+69562,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+69563,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69564,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69565,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69566,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69567,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69568,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69569,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+69571,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+69572,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69573,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69574,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69575,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69576,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69577,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69578,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69579,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+69580,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+69581,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69582,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69583,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69584,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69585,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69586,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69587,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69588,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+69589,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+69590,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69591,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69592,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69593,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69594,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69595,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69596,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69597,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+69598,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+69599,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+69600,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69601,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69603,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69604,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69605,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69606,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+69608,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+69609,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69610,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69612,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69613,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69614,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69615,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69616,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+69617,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+69618,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69619,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69621,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69622,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69623,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69624,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69625,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+69626,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+69627,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69628,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69630,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69631,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69633,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69634,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+69635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+69636,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69637,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69638,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69639,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69640,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69641,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69642,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+69644,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+69645,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69646,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69647,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69648,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69649,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69650,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69651,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+69653,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+69654,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69655,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69656,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69657,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69658,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69659,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69660,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69661,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+69662,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+69663,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69664,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69665,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69666,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69667,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69668,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69669,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69670,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+69671,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+69672,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69673,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69674,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69675,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+69676,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69677,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69678,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69679,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+69680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+69681,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69682,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69683,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69684,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+69685,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69686,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69687,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+69689,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+69690,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69691,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69692,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69693,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+69694,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69695,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69696,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69697,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+69698,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+69699,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69700,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69701,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69702,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+69703,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69704,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69705,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69706,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+69707,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+69708,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69709,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69710,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69711,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+69712,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69713,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69714,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69715,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+69716,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+69717,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69718,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69719,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69720,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+69721,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69722,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69723,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69724,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+69725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+69726,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69727,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69728,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69729,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+69730,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69731,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69732,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69733,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+69734,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+69735,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69736,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69737,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69738,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+69739,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69740,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69741,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69742,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+69743,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+69744,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+69745,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69746,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69748,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+69749,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69750,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69751,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69752,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+69753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+69754,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69755,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69757,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+69758,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69759,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69760,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+69762,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+69763,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69764,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69766,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+69767,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69768,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69769,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+69771,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+69772,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69773,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69774,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69775,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+69776,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69777,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69778,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69779,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+69780,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+69781,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69782,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69784,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+69785,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69787,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69788,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+69789,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+69790,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69791,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69792,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69793,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+69794,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69795,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69796,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+69798,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+69799,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69800,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69801,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69802,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+69803,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69804,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69805,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69806,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+69807,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+69808,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69809,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69810,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+69811,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+69812,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+69813,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
    }
}
